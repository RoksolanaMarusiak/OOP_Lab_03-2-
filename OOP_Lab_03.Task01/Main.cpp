#include <iostream>
#include "Circle.h"

#define M 4

using namespace std;

Circle *list = new Circle[M];

int main(void)
{
	int X, Y, Z;
	double cradius;

	for (size_t i = 0; i < M; i++) {
		cout << "Circle number " << i << ":" << endl;
		cout << "Radius = ";
		cin >> cradius;
		list[i].SetRadius(cradius);
		cout << "X = ";
		cin >> X;
		list[i].SetX(X);
		cout << "Y = ";
		cin >> Y;
		list[i].SetY(Y);
		cout << "Z = ";
		cin >> Z;
		list[i].SetZ(Z);
	}
	cout << "Comparison c1 < c2: " << (list[0] <= list[1]) << endl;
	cout << "Comparison c2 < c1: " << (list[1] <= list[0]) << endl;
	Circle tmp;
	for (int i = 1; i < M; i++)
		for (int j = i; j > 0 && list[j - 1] < list[j]; j--)
		{
			tmp = list[j];
			list[j] = list[j - 1];
			list[j - 1] = tmp;
		}
	system("cls");
	cout << "---------------Print---------------\n";
	for (int i = 0; i < M; i++) {
		cout << "Circle number " << i << ":" << endl;
		cout << "Coordinates of the centre: ";
		cout << "O(" << list[i].GetX() << ";" << list[i].GetY() << ";" << list[i].GetZ() << ")" << endl;
		cout << "Radius: " << list[i].GetRadius() << endl;
		cout << "Length: " << list[i].Length() << endl;
		cout << "Square: " << list[i].Square() << endl;
		cout << "------------------------------------\n";
	}
	cout << (list[0] - list[3]);
	system("pause");
	return 0;
}
