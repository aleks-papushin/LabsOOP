#include <string>
#include <iostream>

#include "myString.h"

using namespace std;

MyString::MyString() 
{
	m_pStr = new char[1];
	m_pStr[0] = '\0';
}

MyString::MyString(const char* pStr)
{
	m_pStr = new char[strlen(pStr) + 1];
	strcpy(m_pStr, pStr);
}

MyString::MyString(const MyString & other)
{
	m_pStr = new char[strlen(other.m_pStr) + 1];
	strcpy(m_pStr, other.m_pStr);
}

MyString::MyString(MyString && other) 
{
	m_pStr = other.m_pStr; //отнимаем
	other.m_pStr = nullptr; //обнуляем
}

MyString::~MyString()
{	
	delete[] m_pStr;
}

void MyString::SetNewString(const char * pStr)
{
	delete m_pStr;
	m_pStr = new char[strlen(pStr) + 1];
	strcpy(m_pStr, pStr);
}

const char * MyString::GetString() const
{
	return m_pStr;
}

void MyString::ConcatString(const char * pStr)
{
	if (strlen(pStr) > 0)
	{
		char * tmp = new char[strlen(m_pStr) + strlen(pStr) + 1];
		tmp[0] = '\0';
		strcat(tmp, m_pStr);
		strcat(tmp, pStr);

		delete[] m_pStr;

		m_pStr = tmp;
	}
}

MyString & MyString::operator=(const MyString & refMyStr)
{
	// strlen, strcpy, strcat

	if (this == &refMyStr) return *this;

	delete[] m_pStr;

	m_pStr = new char[strlen(refMyStr.m_pStr) + 1];

	strcpy(m_pStr, refMyStr.m_pStr);

	return *this;
}

MyString & MyString::operator=(const char * pStr)
{
	delete[] m_pStr;

	m_pStr = new char[strlen(pStr) + 1];
	strcpy(m_pStr, pStr);
	return *this;
}

MyString & MyString::operator=(MyString && other) // возвращаем &
{
	if (this == &other) return *this; // если пытаемся присвоить себе самому, то ничего не делаем

	delete[] m_pStr;
	m_pStr = other.m_pStr; //отнимаем
	other.m_pStr = nullptr; //обнуляем

	return *this;
}

MyString & MyString::operator+=(const MyString & ref)
{
	this->ConcatString(ref.m_pStr);
	return *this;
}

MyString MyString::operator+(const MyString & ref)
{
	return ConcatStrings(this->m_pStr, ref.m_pStr, 0);
}

MyString ConcatStrings(char * chArr, ...)
{
	size_t size = 0;

	char ** ppCh = &chArr;

	while (*ppCh != 0)
	{
		size += strlen(*ppCh);
		ppCh++;
	}

	char * out = new char[size + 1];
	out[0] = '\0';

	ppCh = &chArr;

	while (*ppCh != 0)
	{
		strcat(out, *ppCh);
		ppCh++;
	}

	size_t idx = 0; // индекс элемента при конкатенации в out

	MyString local(out);

	delete[] out;

	return local;
}

ostream & operator<<(ostream & os, const MyString & s)
{
	os << s.GetString();
	return os;
}
