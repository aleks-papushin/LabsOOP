#pragma once

#include "Shape.h"
#include "Rect.h"

class Circle : public Shape
{
	int m_x, m_y, m_radius;

public:
	Circle();
	Circle(int x, int y, int radius, Color c = RED);

	Circle(const Circle & other);

	Circle(const Rect & rect);

	~Circle();

	void WhereAmI();
	void Inflate(int a);
};
