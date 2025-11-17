#include <iostream>
using namespace std;

int main ()
{
	int a;
	double x1, x2;
	cout << "Enter a: ";
	cin >> a;
	x1 = a;
	do {
		x2 = (x1 + a / x1) / 2.0;
		if (x2 - x1 < 1e-5) {
			cout << "The square root of " << a << " is " << x2 << endl;
			break;
		}
		else {
			x1 = x2;
		}
	} while (1);
	return 0;
}