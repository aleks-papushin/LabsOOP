#pragma once
#include "Color.h"

class Shape
{
protected:
	Color m_color;

public:
	Shape();
	Shape(Color color);

	Shape(const Shape & other);

	virtual ~Shape();

	virtual void WhereAmI();
	virtual void Inflate(int);
};