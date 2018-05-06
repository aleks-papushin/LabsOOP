#pragma once

#include "myString.h"
#include "Data.h"

class Pair
{
	MyString m_key;
	Data m_data;

public:
	Pair(MyString key = MyString(""), Data data = Data());
	Pair(const char * key, const Data & data);
	//Pair(const Pair & other);
	//Pair(Pair && other);

	//~Pair();

	//Pair & operator=(const Pair & other);
	//Pair & operator=(Pair && other);

	bool operator==(const char * key) const;

	friend class BD;
	friend ostream & operator<<(ostream & os, const Pair & pair);
};