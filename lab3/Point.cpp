#include "Point.h"

Point::Point(int x, int y)
{
	m_x = x;
	m_y = y;
}

Point::~Point(){}

int Point::GetX() const
{
	return m_x;
}

int Point::GetY() const
{
	return m_y;
}

void Point::operator=(Point & p)
{
	this->m_x = p.m_x;
	this->m_y = p.m_y;
}

Point & Point::operator+=(Point & other)
{
	return Point(m_x += other.m_x, m_y += other.m_y);
}

void Point::operator+=(int d)
{
	m_x += d;
	m_y += d;
}

Point Point::operator+(const Point & p) const
{
	return Point(this->m_x + p.m_x, this->m_y + p.m_y);
}

Point Point::operator+(int d) const
{
	return Point(this->m_x + d, this->m_y + d);
}

Point Point::operator-(const Point & p) const
{
	return Point(this->m_x - p.m_x, this->m_y - p.m_y);
}

Point Point::operator-(int d) const
{
	return Point(this->m_x - d, this->m_y - d);
}

Point Point::operator+() const
{
	return *this;
}

Point Point::operator-() const
{
	return Point( -(this->m_x), -(this->m_y) );
}

Point operator+(int d, Point & p)
{
	return Point(d + p.GetX(), d + p.GetY());
}

Point operator-(int d, Point & p)
{
	return Point(d - p.GetX(), d - p.GetY());
}

Point operator-(const Point & p1, const Point & p2)
{
	return Point(p1.GetX() - p2.GetX(), p1.GetY() - p2.GetY());
}

Point operator-=(Point & p1, const Point & p2)
{
	return Point(p1.GetX() - p2.GetX(), p1.GetY() - p2.GetY());
}