#ifndef INFOCACULATOR_H
#define INFOCACULATOR_H
#include <vector>
class InfoCaculator{
	public:
		static double infoCaculate(int p,int n);
		static double infoClassCal(int NumOfattr,int NumOfPoint, std::vector<std::vector<double> > &attrVec);
	private:

};
#endif