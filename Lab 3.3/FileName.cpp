// Lab_03_3.cpp
// < Циган Лілії >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 17

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
		double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -1) y = 1;
	else if (x > -1 && x <= 0)
		y = -sqrt(R * R - pow(x + R, 2));
	else if (x > 0 && x <= 2)
		y = -R;
	else if (x > 2)
		y = 0.5 * (x - 2);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}