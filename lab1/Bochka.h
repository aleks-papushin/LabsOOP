#pragma once

class Bochka
{
	float m_water; // ����� ���� � ������
	float m_spirt; // ����� ������� (100%) ������� � ������

public:
	Bochka(float vol, float percent); // vol - ����� �����, percent - ������� ������ �� ������ ������ (�� 100% ����� �������)

	void Pereliv(Bochka & other, float vol); // ���������� vol ������ �� ������ �����

	float SpirtVol(); // ������������� ���������� ������ � ����� (�� 100% ����� 1)
};
