#include "People.h"
#include "MiscMethod.h"
#include <iostream>
#include <vector>
using namespace std;
People::People(vector<string>&inputVec)
{
	age = MiscMethod::stringToFloat(inputVec[0]);
    workclass=inputVec[1];
    fnlwgt=MiscMethod::stringToFloat(inputVec[2]);
	education=inputVec[3];
    educationNum=MiscMethod::stringToFloat(inputVec[4]);
	maritalStatus=inputVec[5];
	occupation=inputVec[6];
	relationship=inputVec[7];
	race=inputVec[8];
	sex=inputVec[9];
	capitalGain=MiscMethod::stringToFloat(inputVec[10]);
	capitalLoss=MiscMethod::stringToFloat(inputVec[11]);
	hoursPerWeek=MiscMethod::stringToFloat(inputVec[12]);
	country=inputVec[13];
	group=inputVec[14];
}
void People::showAllAttr()
{
	cout<<"age: "<<age<<endl;
	cout<<"workclass: "<<workclass<<endl;
	cout<<"fnlwgt: "<<fnlwgt<<endl;
	cout<<"education: "<<education<<endl;
	cout<<"educationNum: "<<educationNum<<endl;
	cout<<"maritalStatus: "<<maritalStatus<<endl;
	cout<<"occupation: "<<occupation<<endl;
	cout<<"relationship: "<<relationship<<endl;
	cout<<"race: "<<race<<endl;
	cout<<"sex: "<<sex<<endl;
	cout<<"capitalGain: "<<capitalGain<<endl;
	cout<<"capitalLoss: "<<capitalLoss<<endl;
	cout<<"hoursPerWeek: "<<hoursPerWeek<<endl;
	cout<<"country: "<<country<<endl;
	cout<<"group: "<<group<<endl;
}
float People::getAge(){return age;}
std::string People::getWorkClass(){return workclass;}
float People::getFnlwgt(){return fnlwgt;}
std::string People::getEducation(){return education;}
float People::getEducationNum(){return educationNum;}
std::string People::getMaritalStatus(){return maritalStatus;}
std::string People::getOccupation(){return occupation;}
std::string People::getRelationship(){return relationship;}
std::string People::getRace(){return race;}
std::string People::getSex(){return sex;}
float People::getCapitalGain(){return capitalGain;}
float People::getCapitalLoss(){return capitalLoss;}
float People::getHoursPerWeek(){return hoursPerWeek;}
std::string People::getCountry(){return country;}
std::string People::getGroup(){return group;}