#include "Iraq.h"


Iraq::Iraq(UnitedNations* m):Country(m)
{
}


Iraq::~Iraq(void)
{
}

void Iraq::Declare(string message)
{
	mediator->Declare(message,this);
}

void Iraq::SendMessage(string message)
{
	cout<<"�����˷�����Ϣ��"<<message<<endl;
}

void Iraq::GetMessage(string message)
{
	cout<<"�����˻�öԷ���Ϣ��"<<message<<endl;
}