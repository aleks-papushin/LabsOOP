#include "Pair.h"

Pair::Pair(MyString key, Data data)
{
	m_key = key;
	m_data = data;
}

Pair::Pair(const char * key, const Data & data)
{
	m_key = key;
	m_data = data;
}

bool Pair::operator==(const char * key) const
{
	return strcmp(this->m_key.GetString(), key) == 0;
}

ostream & operator<<(ostream & os, const Pair & pair)
{
	return os << "Last name: " << pair.m_key << pair.m_data;
}
