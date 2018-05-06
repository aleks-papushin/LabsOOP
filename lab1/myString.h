#pragma once

class MyString
{
    char* m_pStr;	//строка-член класса

public:
	MyString();
	explicit MyString(const char* pStr);
	MyString(const MyString & other);	
	MyString( MyString && other);

	~MyString();

	void SetNewString(char * pStr);
	const char * GetString() const;
};

MyString ConcatStrings(char * chArr, ...);