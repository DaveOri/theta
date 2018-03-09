#include <vector>

class results {

public:
	double alpha, beta, gamma;
	double theta0,phi0;
	double theta1,phi1;

	int nTheta;
	vector<double> theta;
	
	double Csca, Cabs, Cext, Cbk;
	double Qsca, Qabs, Qext, Qbk, xs;
	
	results();
	~results();
	
	void printCrossSections();
	void printEfficiencies();
};
