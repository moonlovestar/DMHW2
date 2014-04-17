#include "InfoCaculator.h"
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char **argv){
	
	// int inputA=9;
	// int inputB=5;
	// cout<<"I("<<inputA<<","<<inputB<<"): "<<InfoCaculator::infoCaculate(inputA,inputB)<<endl;
	vector<vector<double> > attrVec;
	vector<double>attrRow;
	
	attrRow.push_back(2.0);
	attrRow.push_back(3.0);
	attrVec.push_back(attrRow);
	attrRow.clear();
	attrRow.push_back(4.0);
	attrRow.push_back(0.0);
	attrVec.push_back(attrRow);
	attrRow.clear();
	attrRow.push_back(3.0);
	attrRow.push_back(2.0);
	attrVec.push_back(attrRow);
	attrRow.clear();
	cout<<"Slide example Info_age: "<<InfoCaculator::infoClassCal(3,14,attrVec)<<endl;
	return 0;
}