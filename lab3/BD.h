#pragma once

#include "Pair.h"

const size_t DEFAULT_CAPACITY = 6;

class BD
{
	Pair ** m_pBase;
	size_t m_count;
	size_t m_capacity;

public:
	BD();
	//BD(const BD & bd);
	//BD(BD && bd);

	//~BD();

	//BD & operator=(const BD & bd);
	//BD & operator=(BD && bd);

	Data & operator[](const char * key);

	//int DeletePair(const char * key);

protected:
	void IncreaseCapacity(); 
	void AddEmployee(const char * key);

	//friend ostream & operator<<(ostream & os, const BD & bd);
};