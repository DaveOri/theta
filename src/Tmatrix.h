/*
COPYRIGHT and blablas

This will be a (template?) class to deal with generic complex T-matrix and retrieve scattering properties from it

*/

#include <eigen3/Eigen/Dense>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class Tmatrix {
public:
	int N;
	vector<vector<vector<vector<Eigen::Matrix2cd> > > > T;
	Tmatrix(int);
	Tmatrix(ifstream&);
};

Tmatrix::Tmatrix(int N){
	N=N;
	
}

Tmatrix::Tmatrix(ifstream& file){
	string line;
	while (getline(file,line)) {
		stringstream lineStream(line);
		string cell;
		while (getline(lineStream,cell,' ')) {
			cout<<cell<<"\t";
		}
		cout<<endl;
	}
}
