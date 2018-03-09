#include <boost/program_options.hpp>
#include <iostream>

#include "argument_parser.h"

using namespace std;
namespace po = boost::program_options;

argument_parser::argument_parser(int argn, char** argv){
	po::options_description description("Allowed options");
	
	cout<<"Parser created with "<<argn<<" arguments"<<endl;
	description.add_options()
		("help", "produce help message")
		("options", "list options")
		("lambda", po::value<double>(),"set lambda")
		("size",po::value<double>(),"set particle size")
		("m",po::value<vector<double> >()->multitoken(),"set complex refractive index")
		("ar",po::value<double>(),"set aspect ratio")
	;

	po::store(po::parse_command_line(argn, argv, description), vm);
	po::notify(vm);

	if (vm.count("help")) {
		cout<<"This is the theta program, please type --options for list of available options"<<endl;
	}

	if (vm.count("options")) {
		cout<<description<<endl;
	}

	if (vm.count("lambda")) {
		cout<<"Lambda has been set to "<<vm["lambda"].as<double>()<<endl;
	} else {
		cout<<"lambda has not been set"<<endl;
	}

	if (vm.count("size")) {
		cout<<"size has been set to"<<vm["size"].as<double>()<<endl;
	} else {
		cout<<"size has not been set"<<endl;
	}

	if (vm.count("m")) {
		if (vm["m"].as<vector<double> >().size() == 2) {
			cout<<"refractive index has been set to "<<vm["m"].as<vector<double> >()[0]<<"+i"<<vm["m"].as<vector<double> >()[1]<<endl;
		} else {
			cout<<"refractive index must be set with the --m m_real m_imag sintax, you have passed "<<vm["m"].as<vector<double> >().size()<<" values to the --m option"<<endl;
		}
	} else {
		cout<<"refractive index has not been set"<<endl;
	}

	if (vm.count("ar")) {
		cout<<"aspect ratio set to "<<vm["ar"].as<double>()<<endl;
	} else {
		cout<<"aspect ratio has not been set"<<endl;
	}
};
