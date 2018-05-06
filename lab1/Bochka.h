#pragma once

class Bochka
{
	float m_water; // объем воды в литрах
	float m_spirt; // объем чистого (100%) этанола в литрах

public:
	Bochka(float vol, float percent); // vol - общий объем, percent - процент спирта от общего объема (за 100% берем единицу)

	void Pereliv(Bochka & other, float vol); // переливает vol литров из другой бочки

	float SpirtVol(); // относительное содержание спирта в бочке (за 100% берем 1)
};
