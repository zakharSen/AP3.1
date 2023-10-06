#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double X;
	double A;
	double Y;
	double B;
	cout << "X = "; cin >> X;

	A = X;
	if (X <= -1)
		B = log(fabs(cos(X * 5))) + exp(1 / X + X);
	if (-1 < X && X < 0.4)
		B = sqrt(cbrt(2 - X)) - tan(X);
	if (X >= 0.4)
		B = sin(X * 5) - sqrt(fabs(1 - X));

	Y = A + B;
	cout << endl;
	cout << "1) Y = " << Y;
	cout << endl;
	if (X <= -1)
			 B = log(fabs(cos(X * 5))) + exp(1 / X + X);
	else
		if (-1 < X && X < 0.4)
			 B = sqrt(cbrt(2 - X)) - tan(X);
		else
			 B = sin(X * 5) - sqrt(fabs(1 - X));

	Y = A + B;
	cout << "2) Y = " << Y;
	cin.get();
	return 0;
}
