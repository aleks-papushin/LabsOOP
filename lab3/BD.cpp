#include "BD.h"

BD::BD()
{
	m_capacity = DEFAULT_CAPACITY; 
	m_count = 0;

	m_pBase = new Pair * [m_capacity];

	for (size_t i = 0; i < m_capacity; i++)
	{
		m_pBase[i] = new Pair();
	}
}

Data & BD::operator[](const char * key)
{
	for (size_t i = 0; i < m_count; i++)
	{
		if (*m_pBase[i] == key)
		{
			return m_pBase[i]->m_data;
		}
	}

	if (m_count >= m_capacity)
	{
		IncreaseCapacity();
	}

	AddEmployee(key);
	m_count++;

	return m_pBase[m_count - 1]->m_data;
}

void BD::IncreaseCapacity()
{
	size_t newCapacity = m_capacity + DEFAULT_CAPACITY; // увеличим, например, на дефолтное значение
	Pair ** tmp = new Pair * [newCapacity];

	// сначала копируем старые записи
	for (size_t i = 0; i < m_capacity; i++)
	{
		tmp[i] = m_pBase[i]; // !!! перегрузить для Pair оператор =
	}

	// теперь создадим дефолтные Pair для оставшихся 
	for (size_t i = m_capacity; i < newCapacity; i++)
	{
		tmp[i] = new Pair();
	}

	delete[] m_pBase;
	m_pBase = tmp;

	m_capacity = newCapacity;
}

void BD::AddEmployee(const char * key)
{
	m_pBase[m_count]->m_key = key;
}

ostream & operator<<(ostream & os, const BD & bd)
{
	os << "Base contents:" << endl;
	for (size_t i = 0; i < bd.m_count; i++)
	{
		os << *(bd.m_pBase[i]) << endl;
	}
	return os;
}