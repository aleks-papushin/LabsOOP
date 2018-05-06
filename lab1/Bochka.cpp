#include <string>
#include <iostream>

#include "Bochka.h"

using namespace std;

Bochka::Bochka(float vol, float percent)
{
	m_spirt = vol * percent;
	m_water = vol - m_spirt;
}

void Bochka::Pereliv(Bochka & other, float vol)
{
	float otherSpirt = other.SpirtVol(); // концентрация спирта в бочке, откуда берем

	other.m_spirt -= vol * otherSpirt;
	m_spirt += vol * otherSpirt;
	
	other.m_water -= vol * (1 - otherSpirt); // считаем концентрацию и объем воды в переливаемой жидкости
	m_water += vol * (1 - otherSpirt);	
}

float Bochka::SpirtVol()
{	
	return m_spirt / (m_spirt + m_water); // концентрация спирта в бочке (объем чистого спирта / общий объем)
}

