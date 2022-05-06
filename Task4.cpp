#include <iostream>
#include <math.h>

using namespace std;

int main() { // Variant 1
	double a;
	double b;
	double n;
	double m;

	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;

	if (a >= b) {
		n = pow((a-b), 1/3.0);
	}
	else {
		n = pow(a, 2) + (a - b) / (sin(a * b));
	}

	if (n < b) {
		m = (n + a) / (-b) + sqrt(pow(sin(a), 2) - cos(n));
	}
	else if (n == b) {
		m = pow(b, 2) + tan(n * a);
	}
	else {
		m = pow(b, 3) + n * pow(a, 2);
	}

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "n: " << n << endl;
	cout << "m: " << m << endl;


}