#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <sstream>
#include <string>
#include "MiscMethod.h"
using namespace std;

vector<string> splitStringToWords(string inputString,string delim)
{
	vector<string> wordVector;
	stringstream stringStream(inputString);
	string line;
	getline(stringStream, line); 
	{
		std::size_t prev = 0, pos;
		while ((pos = line.find_first_of(delim, prev)) != std::string::npos)
		{
			if (pos > prev)
				wordVector.push_back(line.substr(prev, pos-prev));
			prev = pos+1;
		}
		if (prev < line.length())
			wordVector.push_back(line.substr(prev, std::string::npos));
	}
	return wordVector;
}

struct People{
        float age;
        string workclass;
        float fnlwgt;
        string education;
        float educationNum;
        string maritalStatus;
        string occupation;
        string relationship;
        string race;
        string sex;
        float capitalGain;
        float capitalLoss;
        float hoursPerWeek;
        string country;
        string group;

};

int main()
{
    ifstream input;
    ofstream output;

    fstream file;
    vector<People> people;
    vector<string> tempString;
    //People* tempPeople = new People;
    People tempPeople;

    file.open("census1997.dat");
    if(file)
	{
	    string tempStr="";
		while(getline(file,tempStr))
		{
			tempString = splitStringToWords(tempStr, " ,");
			tempPeople.age = stringToFloat(tempString[0]);
			tempPeople.workclass = tempString[1];
			tempPeople.fnlwgt = stringToFloat(tempString[2]);
			tempPeople.education = tempString[3];
			tempPeople.educationNum = stringToFloat(tempString[4]);
			tempPeople.maritalStatus = tempString[5];
			tempPeople.occupation = tempString[6];
			tempPeople.relationship = tempString[7];
			tempPeople.race = tempString[8];
			tempPeople.sex = tempString[9];
			tempPeople.capitalGain = stringToFloat(tempString[10]);
			tempPeople.capitalLoss = stringToFloat(tempString[11]);
			tempPeople.hoursPerWeek = stringToFloat(tempString[12]);
			tempPeople.country = tempString[13];
			tempPeople.group = tempString[14];
			people.push_back(tempPeople);
		}
	}
	else
	{
		cout<<"Cannot open file!"<<endl;
	}

	//People* s[People.size()];

	/*for(int i=0;i<People.size();i++)
	{
		//vector<string> s;
		vector<People> s;
		s[i] = new People;
		s=splitStringToWords(People,",");


		//input >> s[i]->age >> s[i]->workclass >> s[i]->education >> s[i]->educationNum >> s[i]->maritalStatus >> s[i]->occupation
      //>> s[i]->relationship >> s[i]->race >> s[i]->sex >> s[i]->capitalGain >> s[i]->capitalLoss >> s[i]->hoursPerWeek
       //>> s[i]->country >> s[i]->group;		
	}*/


        // cout << s[0]->age << endl;
        // cout << s[0]->workclass << endl;
        // cout << s[0]->education << endl;
        // cout << s[0]->educationNum << endl;
        // cout << s[0]->maritalStatus << endl;
    //system("pause");
    return 0;

}