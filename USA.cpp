#include "USA.h"


USA::USA(UnitedNations* m):Country(m)
{
}


USA::~USA(void)
{
}

void USA::Declare(string message)
{
	mediator->Declare(message,this);
}

void USA::SendMessage(string message)
{
	cout<<"����������Ϣ��"<<message<<endl;
}

void USA::GetMessage(string message)
{
	cout<<"������öԷ���Ϣ��"<<message<<endl;
}