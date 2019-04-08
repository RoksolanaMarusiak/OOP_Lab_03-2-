#pragma once
#include<iostream>

using namespace std;

class Circle
{
private:
	double *radius;
	int *x;
	int *y;
	int *z;
public:
	Circle();
	Circle(double cradius, int x, int y, int z);
	~Circle();

	void SetRadius(double cradius);
	double GetRadius() const;
	double Square() const;
	double Length() const;
	void SetX(int X);
	void SetY(int Y);
	void SetZ(int Z);
	int GetX() const;
	int GetY() const;
	int GetZ() const;

	friend const bool operator<=(const Circle & c1, const Circle & c2);
	friend const Circle operator-(const Circle & c1, const Circle & c2);
	friend ostream& operator<< (ostream &s, const Circle &v);
	friend bool const operator<(const Circle & c1, const Circle & c2);
};