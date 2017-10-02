/*
COPYRIGHT and blablas




*/

#include <boost/program_options.hpp>
namespace po = boost::program_options;

#include <iostream>
#include <iterator>
using namespace std;

#include "argument_parser.h"

po::options_description description("Allowed options");
po::variables_map vm;

int main(int argn, char** argv) {
	cout<<"Hello worlds!"<<endl;
	argument_parser parser(argn, argv);
	
	cout<<"expecting break  "<<parser.vm["lambda"].as<double>()<<endl;
	cout<<parser.vm.count("lambda")<<" "<<parser.vm.count("help")<<endl;

	return 0;
}
