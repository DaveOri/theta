#include <boost/program_options.hpp>
#include <iostream>
using namespace std;
namespace po = boost::program_options;



class argument_parser {
	public:
		po::variables_map vm; // public member accessible from outside

		argument_parser (int, char**);
};




// IMPLEMENTATIONS

argument_parser::argument_parser(int argn, char** argv){
	po::options_description description("Allowed options");
	
	cout<<"Parser created with "<<argn<<" arguments"<<endl;
	description.add_options()
		("help", "produce help message")
		("lambda", po::value<double>(),"set lambda")
	;

	po::store(po::parse_command_line(argn, argv, description), vm);
	po::notify(vm);

	if (vm.count("help")) {
		cout<<"This is the theta program, please type --options for list of available options"<<endl;
	}

	if (vm.count("lambda")) {
		cout<<"Lambda has been set to "<<vm["lambda"].as<double>()<<endl;
	} else {
		cout<<"lambda has not been set"<<endl;
	}

};
