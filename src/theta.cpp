/*
COPYRIGHT and blablas




*/

#include <boost/program_options.hpp>
namespace po = boost::program_options;

#include <eigen3/Eigen/Dense>
using Eigen::MatrixXd;

#include <iostream>
#include <iterator>
#include <istream>
#include <fstream>
#include <string>
using namespace std;

#include "argument_parser.h"
#include "results.h"
#include "Tmatrix.h"

po::options_description description("Allowed options");
po::variables_map vm;

int main(int argn, char** argv) {
	cout<<"Hello worlds!"<<endl;
	argument_parser parser(argn, argv);
	
	//cout<<"expecting break  "<<parser.vm["lambda"].as<double>()<<endl;
	//cout<<parser.vm.count("lambda")<<" "<<parser.vm.count("help")<<endl;

	results res;
	res.Cabs = 4.5;
	res.Cext = 5.5;
	res.Cbk = 1.5;
	res.Csca = 1;
	res.printCrossSections();

	MatrixXd m(2,2);
	m(0,0) = 3;
	m(1,0) = 2.5;
	m(0,1) = -1;
	m(1,1) = m(1,0) + m(0,1);
	std::cout << m << std::endl;

	ifstream indata;
	indata.open("../t-matrix/Tmatrix.txt");
	Tmatrix T(indata);

	return 0;
}
