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
	cout<<"美国发送信息："<<message<<endl;
}

void USA::GetMessage(string message)
{
	cout<<"美国获得对方信息："<<message<<endl;
}