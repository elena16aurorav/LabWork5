#include "MyString.h"

MyString::MyString(const char* p){

	m_pMyCounter = Cointer::existCounter(p);

};
MyString::MyString(const MyString& other){

};
MyString::MyString(const MyString&& tmp){

};

MyString::~MyString(){

};

MyString& MyString::operator=(const MyString& other){

	return *this;
};
MyString& MyString::operator=(const MyString&& tmp){

	return *this;
};
