// Lab 5_1
#include <iostream>
#include <cmath>

using namespace std;

double g(const double x, const double y); // прототип

int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double c = (g(s, t - 1) + (pow(g(t * t, s), 2)) / ((pow(g(s * s + t * t, 1), 2))));

	cout << "c = " << c << endl;

	return 0;
}

double g(const double x, const double y) // визначення
{
	return (x / (y * y)) - sin(y / (x * x));
}
