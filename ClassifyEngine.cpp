#include "ClassifyEngine.h"
#include "MiscMethod.h"
#include <iostream>
#include <fstream>
using namespace std;
void ClassifyEngine::run(){
	readPersonAttr();
}
void ClassifyEngine::readPersonAttr()
{
	fstream file;
	file.open("census1997.dat",ios::in);
	if(file)
	{
		string tempStr="";
		vector<string> attrVec;
		while(getline(file,tempStr))
		{
			cout<<tempStr<<endl;
			attrVec=MiscMethod::splitStringToAttrs(tempStr,", ");
			People tempPeople(attrVec);
			tempPeople.showAllAttr();
			char a;
			cin>>a;		

		}  
	}
	else
	{
		cout<<"Cannot open file!"<<endl;
	}
}