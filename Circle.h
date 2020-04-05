#pragma once
#include "Point.h"
class Circle;
class Control
{
public:
	bool IntersectCheck(Circle&, Circle&);
};
class LookIntoCircle
{
public:
	double GetRadius(Circle&);
};
class Circle
{
private:
	Point Centre;
	double Radius;
public:
	Circle(double X, double Y, double R);
	friend class LookIntoCircle;
	friend bool Control::IntersectCheck(Circle&, Circle&);
	friend bool operator>(const Circle&, const Circle&);
	friend Circle operator+(const Circle&, const Circle&);
};
