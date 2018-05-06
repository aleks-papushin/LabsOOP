#include <string>
#include <iostream>

#include "Shape.h"

using namespace std;

Shape::Shape()
{
	cout << "In Shape default constructor" << endl;

	m_color = RED;
}

Shape::Shape(Color color)
{
	cout << "In Shape params constructor" << endl;

	m_color = color;
}

Shape::Shape(const Shape & other)
{
	cout << "In Shape copy constructor" << endl;
	m_color = other.m_color;
}

Shape::~Shape()
{
	cout << "In Shape destructor" << endl;
}

void Shape::WhereAmI()
{
	cout << "Now I am in Shape class" << endl;
}

void Shape::Inflate(int){}