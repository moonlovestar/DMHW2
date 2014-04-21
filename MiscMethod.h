#ifndef MISCMETHOD_H
#define MISCMETHOD_H
#include <iostream>
#include <sstream>
float stringToFloat(std::string str)
{
	std::stringstream ss;
	float result;
	ss<<str;	
	ss>>result;
	std::cout<<result+10.3<<std::endl;
	return result;
}
#endif