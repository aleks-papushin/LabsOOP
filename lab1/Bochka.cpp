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
	float otherSpirt = other.SpirtVol(); // ������������ ������ � �����, ������ �����

	other.m_spirt -= vol * otherSpirt;
	m_spirt += vol * otherSpirt;
	
	other.m_water -= vol * (1 - otherSpirt); // ������� ������������ � ����� ���� � ������������ ��������
	m_water += vol * (1 - otherSpirt);	
}

float Bochka::SpirtVol()
{	
	return m_spirt / (m_spirt + m_water); // ������������ ������ � ����� (����� ������� ������ / ����� �����)
}

