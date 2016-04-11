#ifndef USA_H
#define USA_H

#include "country.h"

class USA : public Country
{
public:
	USA(UnitedNations* m);
	~USA(void);
public:
	virtual void Declare(string message);
	virtual void SendMessage(string message);
	virtual void GetMessage(string message);
};

#endif