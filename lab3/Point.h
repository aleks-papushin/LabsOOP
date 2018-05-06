#pragma once

class Point
{
	int m_x, m_y;

public:
	Point(int x = 0, int y = 0);

	~Point();

	int GetX() const;
	int GetY() const;

	void operator=(Point & p);

	Point & operator+=(Point & other);  // вернуть по ссылке
	void operator+=(int d);

	Point operator+(const Point & p) const;
	Point operator+(int d) const;

	Point operator-(const Point & other) const;
	Point operator-(int d) const;

	Point operator+() const;
	Point operator-() const;
};

Point operator+(int d, const Point & p);
Point operator-(int d, const Point & p);

// сделать глоб. функцию -= , кот. будет принимать 2 параметра
Point operator-(const Point & p1, const Point & p2);
Point operator-=(Point & p1, const Point & p2);