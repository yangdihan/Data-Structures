#ifndef THING2_H
#define THING2_H

#include <iostream>
#include <string>
#include "thing1.h"
using namespace std;

class Thing2: public Thing1{
public:
	string foo();
	string bar();
	virtual ~Thing2();
};


#endif