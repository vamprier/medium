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
	cout<<"伊拉克发送信息："<<message<<endl;
}

void Iraq::GetMessage(string message)
{
	cout<<"伊拉克获得对方信息："<<message<<endl;
}