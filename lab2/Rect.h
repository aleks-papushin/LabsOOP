#pragma once

#include "Shape.h"

class Rect : public Shape
{
	int m_left, m_right, m_top, m_bottom;

public:
	Rect();
	Rect(int left, int right, int top, int bottom, Color c = RED);

	Rect(const Rect & other);

	~Rect();

	void WhereAmI();

	void Inflate(int left, int right, int top, int bottom);
	void Inflate(int dX = 1, int dY = 1);
	void Inflate(int dX);

	void SetAll(int left, int right, int top, int bottom);
	void GetAll(int & left, int & right, int & top, int & bottom) const; // константный метод

	void BoundingRect(const Rect & rect1, const Rect & rect2);

private:
	void Normalize();
	void Swap(int &a, int &b);
};

Rect BoundingRect(Rect rect1, Rect rect2);

Rect BoundingRect2(const Rect & rect1, const Rect & rect2);