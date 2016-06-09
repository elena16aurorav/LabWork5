#include "Counter.h"

class MyString{
	Counter* m_pMyCounter;
public:
	MyString(const char* p = " ");
	MyString(const MyString& other);
	MyString(const MyString&& tmp);
	
	~MyString();

	MyString& operator=(const MyString& other);
	MyString& operator=(const MyString&& tmp);

	//printAll
	//upperRegister
	//sort
};