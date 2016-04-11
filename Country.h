#ifndef COUNTRY_H
#define COUNTRY_H

#include "UnitedNations.h"
#include <string>

using namespace std;

class UnitedNations;

class Country
{
public:
	Country(UnitedNations* m);
	virtual ~Country(void);
public:
	virtual void Declare(string message) = 0;
	virtual void SendMessage(string message) = 0;
	virtual void GetMessage(string message) = 0;
protected:
	UnitedNations* mediator;
};

#endif