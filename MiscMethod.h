#ifndef MISCMETHOD_H
#define MISCMETHOD_H
#include <iostream>
#include <vector>
#include <string>
class MiscMethod{
	public:
		static float stringToFloat(std::string str);
		static std::vector<std::string> splitStringToAttrs(std::string inputString,std::string delim);
};

#endif