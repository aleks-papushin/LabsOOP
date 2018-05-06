#pragma once

class Rect{
	int m_left, m_right, m_top, m_bottom;

public:
	Rect();
	Rect(int left, int right, int top, int bottom);

	Rect(const Rect & other);

	~Rect();

	void InflateRect(int left, int right, int top, int bottom);
	void InflateRect(int dX = 1, int dY = 1);

	void SetAll(int left, int right, int top, int bottom);
	void GetAll(int & left, int & right, int & top, int & bottom) const; // константный метод

	void BoundingRect(const Rect & rect1, const Rect & rect2);

private:
	void Normalize();
	void Swap(int &a, int &b);


};

Rect BoundingRect(Rect rect1, Rect rect2);

Rect BoundingRect2(const Rect & rect1, const Rect & rect2);