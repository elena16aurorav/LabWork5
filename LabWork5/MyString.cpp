#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString(const char* string)
{
	m_pMyCounter = Counter::CreateCounter(string);//new Counter();
}

MyString::MyString(const MyString& other)
{
	m_pMyCounter = other.m_pMyCounter;
	m_pMyCounter->AddString();
}

MyString::MyString(MyString&& other)
{
	m_pMyCounter = other.m_pMyCounter;
	other.m_pMyCounter = nullptr;
}

MyString::~MyString()
{
	if(m_pMyCounter != nullptr)
		m_pMyCounter->RemoveString();
}

MyString& MyString::operator=(const MyString& other)
{
	if(this != &other)
	{
		m_pMyCounter->RemoveString();
		m_pMyCounter = other.m_pMyCounter;
		m_pMyCounter->AddString();
	}
	return *this;
}

MyString& MyString::operator=(MyString&& other)
{
	if (this != &other)
	{
		m_pMyCounter->RemoveString();
		m_pMyCounter = other.m_pMyCounter;
		other.m_pMyCounter = nullptr;
	}
	return *this;
}

void MyString::Print()
{
	Counter::Print();
}

void MyString::ToUp()
{
	Counter::ToUp();
}

void MyString::ToLow()
{
	Counter::ToLow();
}

void MyString::PrintToAlph()
{
	Counter::PrintToAlph();
}

ostream & operator<<(ostream & os, const MyString & string)
{
	return os;
}




