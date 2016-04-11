// medium.cpp : 定义控制台应用程序的入口点。
//

#include "UnitedNationsSecurityCouncil.h"

int main(int argc, char* argv[])
{
	UnitedNationsSecurityCouncil* un = new UnitedNationsSecurityCouncil();
	USA* usa = new USA(un);
	Iraq* iraq = new Iraq(un);
	un->SetCountry(usa,iraq);

	usa->Declare("不准研发核武器，否则要发动战争");
	iraq->Declare("我们没有核武器，也不怕侵略");

	cin.ignore();

	return 0;
}

