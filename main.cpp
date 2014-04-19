#include "InfoCalculator.h"
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
void generTestAttr(vector<vector<string> >&attr)
{
	vector<string> row;
	row.push_back("A1");
	row.push_back("A2");
	row.push_back("A3");
	attr.push_back(row);
	row.clear();
	row.push_back("B1");
	row.push_back("B2");
	attr.push_back(row);
	row.clear();
	row.push_back("C1");
	row.push_back("C2");
	attr.push_back(row);
	row.clear();

}
void recursiveTree(vector<string> cur,vector<string> thisTimeGain,vector<vector<string> > &attr,int time)
{
	time++;
	//if end of distribute.
	if(cur.size()==3)
	{
		cout<<"Result:"<<endl;
		for(int i=0;i<cur.size();i++)
		{
			cout<<cur[i]<<" ";
		}
		cout<<endl;
	}
	else
	{
		//Calculate Gain
		vector<string> nextTimeGain=attr[time];
		for(int i=0;i<thisTimeGain.size();i++)
		{
			// cout<<thisTimeGain[i]<<" ";
			cur.push_back(thisTimeGain[i]);
			recursiveTree(cur,nextTimeGain,attr,time);
			cur.pop_back();
		}
	}
}
int main(int argc, char **argv){
	
	// int inputA=9;
	// int inputB=5;
	// cout<<"I("<<inputA<<","<<inputB<<"): "<<InfoCalculator::infoCalculate(inputA,inputB)<<endl;
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
	cout<<"Slide example Info_age: "<<endl<<InfoCalculator::infoClassCal(3,14,attrVec)<<endl;

	vector<vector<string> > attr;
	generTestAttr(attr);
	vector<string> result;
	recursiveTree(result,attr[0],attr,0);
	return 0;
}