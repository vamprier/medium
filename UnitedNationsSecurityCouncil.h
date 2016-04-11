#ifndef UNITEDNATIONSSECURITYCOUNCIL_H
#define UNITEDNATIONSSECURITYCOUNCIL_H

#include "USA.h"
#include "Iraq.h"
#include "unitednations.h"

class UnitedNationsSecurityCouncil : public UnitedNations
{
public:
	UnitedNationsSecurityCouncil();
	~UnitedNationsSecurityCouncil(void);
public:
	virtual void Declare(string message,Country* colleague);
    void SetCountry(USA* u,Iraq* i);
private:
	USA* usa;
	Iraq* iraq;
};

#endif