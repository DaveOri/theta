/*
COPYRIGHT and blablas




*/

#include <boost/program_options.hpp>
namespace po = boost::program_options;

#include <iostream>
#include <iterator>
using namespace std;

po::options_description description("Allowed options");
po::variables_map vm;

int main(int argn, char* argv[]) {
	cout<<"Hello worlds!"<<endl;
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
	

	return 0;
}
