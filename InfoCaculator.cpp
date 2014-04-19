#include "InfoCalculator.h"
#include <math.h>
#include <iostream>
using namespace std;

// calculate the info
double InfoCalculator::infoCalculate(int p,int n){
	double p1=((double)p/(p+n));
	double p2=((double)n/(p+n));
	if(p1!=0&&p2!=0)
		return -p1*(log2(p1))+(-p2*(log2(p2)));
	else{
		if(p1==0&&p2!=0)
		{
			return -p2*(log2(p2));
		}
		else if(p1!=0&&p2==0)
		{
			return -p1*(log2(p1));
		}
		else
		{
			return 0;
		}
	}

}
double InfoCalculator::infoClassCal(int NumOfattr,int NumOfPoint,vector<vector<double> > &attrVec){
	double result=0;
	// cout<<0*log2(0)<<"GG"<<endl;
	for(int i=0;i<NumOfattr;i++)
	{
		cout<<attrVec[i][0]<<" "<<attrVec[i][1]<<endl;
		result+=((double)(attrVec[i][0]+attrVec[i][1])/NumOfPoint)*InfoCalculator::infoCalculate(attrVec[i][0],attrVec[i][1]);
	}
		cout<<result<<endl;
	return result;
}