#ifndef CLASSIFYENGINE_H
#define CLASSIFYENGINE_H
#include "People.h"
#include <vector>

class ClassifyEngine{
	public:
		void run();
	private:
		void readPersonAttr();
		std::vector<People> people;
};
#endif