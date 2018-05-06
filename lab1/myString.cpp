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
	m_pStr = other.m_pStr; //��������
	other.m_pStr = nullptr; //��������
}

MyString::~MyString()
{
	delete[] m_pStr;
}

void MyString::SetNewString(char * pStr)
{
	delete m_pStr;
	m_pStr = new char[strlen(pStr) + 1];
	strcpy(m_pStr, pStr);
}

const char * MyString::GetString() const
{
	//char * pStr = new char[strlen(m_pStr) + 1];
	//strcpy(pStr, m_pStr);
	return m_pStr;
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

	ppCh = &chArr;

	size_t idx = 0; // ������ �������� ��� ������������ � out

	for (size_t i = 0; ppCh[i] != 0; i++)
	{
		for (size_t j = 0; ppCh[i][j] != '\0'; j++, idx++)
		{
			out[idx] = ppCh[i][j];
		}
	}

	out[idx] = '\0';

	MyString local(out);

	delete[] out;

	return local;
}

//MyString ConcatStrings(char * chArr[], size_t arrSize)
//{
//	// ��������� ����� ��������� ���������� ��������...
//	size_t size = 0;
//	for (size_t i = 0; i < arrSize; i++) 
//	{
//		size += strlen(chArr[i]); // ...��� ����� �������� � ���� ����� ������� �������� � �������
//	}
//
//	char * out = new char[size + 1]; // +1 ��� ������������� ����
//	size_t idx = 0; // ������ �������� ��� ������������ � out
//
//	for (size_t i = 0; i < arrSize; i++)
//	{
//		for (size_t j = 0; j < strlen(chArr[i]); j++)
//		{
//			out[idx] = chArr[i][j];
//			idx++;
//		}
//	}
//	out[idx] = '\0'; // ������� ����������� ����
//	return out;
//}