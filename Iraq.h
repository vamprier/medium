#ifndef IRAQ_H
#define IRAQ_H


#include "country.h"

class Iraq : public Country
{
public:
	Iraq(UnitedNations* m);
	~Iraq(void);
public:
	virtual void Declare(string message);
	virtual void SendMessage(string message);
	virtual void GetMessage(string message);
};

#endif