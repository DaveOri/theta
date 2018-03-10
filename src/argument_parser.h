#include <boost/program_options.hpp>
#include <iostream>
using namespace std;
namespace po = boost::program_options;

class argument_parser {
	public:
		po::variables_map vm; // public member accessible from outside
		argument_parser (int, char**);
};