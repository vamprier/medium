#ifndef UNITEDNATIONS_H
#define UNITEDNATIONS_H

#include "Country.h"
#include <string>
#include <iostream>

using namespace std;

class Country;

class UnitedNations
{
public:
	UnitedNations(void);
	virtual ~UnitedNations(void);
public:
	virtual void Declare(string message,Country* colleague) = 0;
};

#endif