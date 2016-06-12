#include <tchar.h>

#include <iostream>
#include <fstream>
#include "MyString.h"
#include "Counter.h"
#define	  stop __asm nop


int _tmain(int argc, _TCHAR* argv[])
{
	MyString str1("baca");
	
	MyString str2("acx");
	MyString str3 = str2;
	MyString str4("abcda");
	MyString str5("acd");
	
	str1.PrintToAlph();
		
	stop

		return 0;
}


