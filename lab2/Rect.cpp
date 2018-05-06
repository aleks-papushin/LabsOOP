#include "Rect.h"
#include <iostream>

using namespace std;

Rect::Rect() : Shape()
{
	cout << "In Rect default constructor" << endl;
	m_left = 0;
	m_right = 0;
	m_top = 0;
	m_bottom = 0;
}

Rect::Rect(int left, int right, int top, int bottom, Color c) : Shape(c)
{
	cout << "In Rect params constructor" << endl;

	m_left = left;
	m_right = right;
	m_top = top;
	m_bottom = bottom;

	m_color = c;

	Normalize();
}

Rect::Rect(const Rect & other) : Shape(other)
{
	cout << "In Rect copy constructor" << endl;
	m_left = other.m_left;
	m_right = other.m_right;
	m_top = other.m_top;
	m_bottom = other.m_bottom;
}

Rect::~Rect()
{
	cout << "In Rect destructor" << endl;
}

void Rect::WhereAmI()
{
	cout << "Now I am in Rect class" << endl;
}

void Rect::Inflate(int left, int right, int top, int bottom)
{
	cout << "Inflate Rect w/ 4 params\n";
	m_left -= left;
	m_right += right;
	m_top -= top;
	m_bottom += bottom;

	Normalize();
}

void Rect::Inflate(int dX, int dY)
{
	cout << "Inflate Rect w/ 2 params\n";
	Inflate(dX, dX, dY, dY);
}

void Rect::Inflate(int dX)
{
	cout << "Inflate Rect w/ 1 param" << endl;
	Inflate(dX, dX);
}

void Rect::SetAll(int left, int right, int top, int bottom)
{
	m_left = left;
	m_right = right;
	m_top = top;
	m_bottom = bottom;

	Normalize();
}

void Rect::GetAll(int & left, int & right, int & top, int & bottom) const
{
	left = m_left;
	right = m_right;
	top = m_top;
	bottom = m_bottom;
}

void Rect::BoundingRect(const Rect & rect1, const Rect & rect2)
{
	m_left = (rect1.m_left < rect2.m_left ? rect1.m_left : rect2.m_left);
	m_right = (rect1.m_right > rect2.m_right ? rect1.m_right : rect2.m_right);
	m_top = (rect1.m_top < rect2.m_top ? rect1.m_top : rect2.m_top);
	m_bottom = (rect1.m_bottom > rect2.m_bottom ? rect1.m_bottom : rect2.m_bottom);
}

void Rect::Normalize()
{
	if (m_left > m_right)
	{
		Swap(m_left, m_right);
	}
	if (m_top > m_bottom)
	{
		Swap(m_top, m_bottom);
	}
}

void Rect::Swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

Rect BoundingRect(Rect rect1, Rect rect2)
{
	int l1, r1, t1, b1;
	rect1.GetAll(l1, r1, t1, b1);
	int l2, r2, t2, b2;
	rect2.GetAll(l2, r2, t2, b2);

	int l, r, t, b;
	l = (l1 < l2 ? l1 : l2);
	r = (r1 > r2 ? r1 : r2);
	t = (t1 < t2 ? t1 : t2);
	b = (b1 > b2 ? b1 : b2);

	return Rect(l, r, t, b);
}

Rect BoundingRect2(const Rect & rect1, const Rect & rect2)
{
	int l1, r1, t1, b1;
	rect1.GetAll(l1, r1, t1, b1);
	int l2, r2, t2, b2;
	rect2.GetAll(l2, r2, t2, b2);

	int l, r, t, b;
	l = (l1 < l2 ? l1 : l2);
	r = (r1 > r2 ? r1 : r2);
	t = (t1 < t2 ? t1 : t2);
	b = (b1 > b2 ? b1 : b2);

	return Rect(l, r, t, b);
}