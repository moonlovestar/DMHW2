#ifndef INFOCALCULATOR_H
#define INFOCALCULATOR_H
#include <vector>
class InfoCalculator{
	public:
		static double infoCalculate(int p,int n);
		static double infoClassCal(int NumOfattr,int NumOfPoint, std::vector<std::vector<double> > &attrVec);
	private:

};
#endif