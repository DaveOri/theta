/*
COPYRIGHT and blablas




*/

#include <boost/program_options.hpp>
namespace po = boost::program_options;

#include <iostream>
#include <iterator>
using namespace std;

int main(int argn, char* argv[]) {
	cout<<"Hello worlds!"<<endl;

	po::options_description description("Allowed options");
/*	description.add_options()
		("help", "produce help message")
		("lambda", po::value<double>(),"set lambda")
	;

	po::variables_map vm;
	po::store(po::parse_command_line(argn, argv, description), vm);
	po::notify(vm);
*/
	return 0;
}
