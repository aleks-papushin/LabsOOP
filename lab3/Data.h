#pragma once

#include "myString.h"

class Data
{
public:
	enum Gender {UNDEF, MALE, FEMALE};

private:
	Gender m_gender;
	size_t m_age;
	MyString m_job;
	float m_salary;

public:
	Data(Gender gender = UNDEF, size_t age = 0, MyString job = MyString(), float salary = 0.0f);
	//Data(const Data & data);
	//Data(Data && data);

	//~Data();

	Data & operator=(const Data & data);
	//Data & operator=(Data && data);

	friend ostream & operator<<(ostream & os, const Data & data);
};
