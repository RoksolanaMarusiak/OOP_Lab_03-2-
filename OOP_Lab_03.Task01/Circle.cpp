#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include "Circle.h"

#define M 4

using namespace std;

Circle::Circle()
{
	this->radius = new double(0);
	this->x = new int(0);
	this->y = new int(0);
	this->z = new int(0);
}

Circle::Circle(double cradius, int X, int Y, int Z)
{
	this->radius = new double(cradius);
	this->x = new int(X);
	this->y = new int(Y);
	this->z = new int(Z);
}

Circle::~Circle()
{
	delete(radius);
	delete(z);
	delete(y);
	delete(x);
}

void Circle::SetRadius(double cradius)
{
	if (cradius <= 0)
	{
		throw "Incorrect radius";
	}

	*radius = cradius;

}

double Circle::GetRadius() const
{
	return *radius;
}

double Circle::Square() const
{
	return (*radius * *radius * M_PI);
}

double Circle::Length() const
{
	return (2 * *radius * M_PI);
}

void Circle::SetX(int X)
{
	*x = X;
}

void Circle::SetY(int Y)
{
	*y = Y;
}

void Circle::SetZ(int Z)
{
	*z = Z;
}

int Circle::GetX() const
{
	return *x;
}

int Circle::GetY() const
{
	return *y;
}

int Circle::GetZ() const
{
	return *z;
}

const bool operator<=(const Circle & c1, const Circle & c2)
{
	double sqr1 = c1.Square();
	double sqr2 = c2.Square();
	return sqr1 <= sqr2;
}

const Circle operator-(const Circle & c1, const Circle & c2)
{
	return Circle(c1.GetRadius() - c2.GetRadius(), c1.GetX() - c2.GetX(), c1.GetY() - c2.GetY(), c1.GetZ() - c2.GetZ());
}

ostream& operator<< (ostream &s, const Circle &v)
{
	s << "\nRadius: " << v.GetRadius() << "\nCoordinates of the centre:" << '(' << v.GetX() << ", " << v.GetY() << ", " << v.GetZ() << ')';
	return s;
}

const bool operator< (const Circle &c1, const Circle &c2)
{
	if (c1.Square() < c2.Square()) {
		return true;
	}
	else { return false; }


}