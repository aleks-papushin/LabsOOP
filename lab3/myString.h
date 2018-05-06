#pragma once

#include <iostream>

using namespace std;

class MyString
{
    char* m_pStr;	//строка-член класса

public:
	MyString();
	explicit MyString(const char* pStr);
	MyString(const MyString & other);	
	MyString( MyString && other);

	~MyString();

	void SetNewString(const char * pStr);
	const char * GetString() const;

	void ConcatString(const char * pStr);

	MyString & operator=(const MyString& refMyStr);
	MyString & operator=(const char * pStr );
	MyString & operator=(MyString && other);

	MyString & operator+=(const MyString & ref); // возвращать по ссылке

	MyString operator+(const MyString & ref);
};

MyString ConcatStrings(char * chArr, ...);

ostream & operator<<(ostream & os, const MyString & s);