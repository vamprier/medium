// medium.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "UnitedNationsSecurityCouncil.h"

int main(int argc, char* argv[])
{
	UnitedNationsSecurityCouncil* un = new UnitedNationsSecurityCouncil();
	USA* usa = new USA(un);
	Iraq* iraq = new Iraq(un);
	un->SetCountry(usa,iraq);

	usa->Declare("��׼�з�������������Ҫ����ս��");
	iraq->Declare("����û�к�������Ҳ��������");

	cin.ignore();

	return 0;
}

