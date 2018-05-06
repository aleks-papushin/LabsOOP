#include "Data.h"

Data::Data(Gender gender, size_t age, MyString job, float salary)
{
	m_gender = gender;
	m_age = age;
	m_job = job;
	m_salary = salary;
}

Data & Data::operator=(const Data & data)
{
	this->m_gender = data.m_gender;
	this->m_age = data.m_age;	
	this->m_job = data.m_job;
	this->m_salary = data.m_salary;
	
	return *this;
}