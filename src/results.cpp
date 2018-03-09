#include <iostream>
using namespace std;

#include "results.h"

results::results(){
	cout<<"results created"<<endl;
};

results::~results(){
	cout<<"results destroyed"<<endl;
};

void results::printCrossSections(){
	cout<<"Cext="<<Cext<<" Csca="<<Csca<<" Cabs="<<Cabs<<" Cbk"<<Cbk<<endl;
};

void results::printEfficiencies(){
	cout<<"Qext="<<Qext<<" Qsca="<<Qsca<<" Qabs="<<Qabs<<" Qbk"<<Qbk<<endl;
};
