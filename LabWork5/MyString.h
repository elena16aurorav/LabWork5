#pragma once

#include <iostream>
#include "Counter.h"


class MyString
{
private:
		Counter * m_pMyCounter;

public:
	MyString(const char* string = " ");//&");
	MyString(const MyString&);
	MyString(MyString &&);
	~MyString();

	MyString& operator=(const MyString& other);
	MyString& operator=(MyString &&);

	friend std::ostream& operator<<(std::ostream& os, const MyString& string);

	static void Print();
	static void ToUp();
	static void ToLow();
	static void PrintToAlph();
};

std::ostream& operator<<(std::ostream& os, const MyString& string);

