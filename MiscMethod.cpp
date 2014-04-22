#include "MiscMethod.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
float MiscMethod::stringToFloat(string str)
{
	stringstream ss;
	float result;
	ss<<str;	
	ss>>result;
	//cout<<result+10.3<<endl;
	return result;
}
vector<string> MiscMethod::splitStringToAttrs(string inputString,string delim)
{
	vector<string> wordVector;
	stringstream stringStream(inputString);
	string line;
	getline(stringStream, line); 
	{
		size_t prev = 0, pos;
		while ((pos = line.find_first_of(delim, prev)) != string::npos)
		{
			if (pos > prev)
				wordVector.push_back(line.substr(prev, pos-prev));
			prev = pos+1;
		}
		if (prev < line.length())
			wordVector.push_back(line.substr(prev, string::npos));
	}
	return wordVector;
}	