#include <iostream>
using namespace std;

int main() {
	double f, c;
	cout << " enter the temperature in fahrenheit: ";
	cin >> f;
	c = (5.0 / 9) * (f - 32);
	cout << " conversion to celcius: " << c;
	return 0;
}