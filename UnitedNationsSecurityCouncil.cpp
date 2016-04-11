#include "UnitedNationsSecurityCouncil.h"


UnitedNationsSecurityCouncil::UnitedNationsSecurityCouncil(void)
{
}


UnitedNationsSecurityCouncil::~UnitedNationsSecurityCouncil(void)
{
}

void UnitedNationsSecurityCouncil::SetCountry(USA* u,Iraq* i)
{
	usa = u;
	iraq = i;
}

void UnitedNationsSecurityCouncil::Declare(string message,Country* colleague)
{
	if (colleague == usa)
	{
		usa->SendMessage(message);
		iraq->GetMessage(message);
	}
	else if( colleague == iraq)
	{
		iraq->SendMessage(message);
		usa->GetMessage(message);
	}
}