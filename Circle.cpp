#include "Circle.h"
#include <cmath>
Circle::Circle(double X, double Y, double R) :Centre(X, Y)
{
	Radius = R;
}

bool Control::IntersectCheck(Circle&C1, Circle& C2) // Definicja funkcji
{
	double CentresDistance;
	CentresDistance = sqrt(pow(C1.Centre.X - C2.Centre.X, 2) + pow(C1.Centre.Y - C2.Centre.Y, 2));
	return (CentresDistance<(C1.Radius + C2.Radius) && CentresDistance>abs(C1.Radius - C2.Radius));
}
double
LookIntoCircle::GetRadius(Circle& C)
{
	return C.Radius;
}

bool operator>(const Circle &C1, const Circle &C2)
{
	if (C1.Radius > C2.Radius) return true;
	else return false;
}

Circle operator+(const Circle &C1, const Circle &C2)
{
	Circle C3(C1.Centre.X, C2.Centre.Y, C1.Radius + C2.Radius);
	return C3;
}
