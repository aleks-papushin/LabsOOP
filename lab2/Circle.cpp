#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle() : Shape(GREEN)
{
	cout << "In Circle def constructor" << endl;

	m_x = 0;
	m_y = 0;
	m_radius = 0;
}

Circle::Circle(int x, int y, int radius, Color c) : Shape(c)
{
	cout << "In Circle constructor w/ params" << endl;

	m_x = x;
	m_y = y;
	m_radius = radius;
}

Circle::Circle(const Circle & other) : Shape(other)
{
	cout << "In Circle copy constructor" << endl;

	m_x = other.m_x;
	m_y = other.m_y;
	m_radius = other.m_radius;
}

Circle::Circle(const Rect & rect) : Shape(rect)
{
	cout << "In Circle rect-copy constructor" << endl;

	int left, right, top, bottom;
	rect.GetAll(left, right, top, bottom);

	int x = (left + right) / 2;
	int y = (top, bottom) / 2;
	int radius = y - top;

	m_x = x;
	m_y = y;
	m_radius = radius;
}

Circle::~Circle()
{
	cout << "In Circle destructor" << endl;
}

void Circle::WhereAmI()
{
	cout << "Now I am in Circle class" << endl;
}

void Circle::Inflate(int a)
{
	cout << "Inflate Circle" << endl;
	m_radius += a;
}
