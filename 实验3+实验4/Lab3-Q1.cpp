#include<iostream>
using namespace std;

int gcdFunc(int a, int b)
{
	int smaller = (a < b) ? a : b;
	int bigger = (a > b) ? a : b;
	while (smaller > 0)
	{
		int temp = smaller;
		smaller = bigger % smaller;
		bigger = temp;
	}
	return bigger;
}

void gcdNlcm(int a, int b, int&gcdRef, int& lcmRef)
{
	gcdRef = gcdFunc(a, b);
	lcmRef = (a * b) / gcdRef;
}

int main()
{
	int n, m, gcd, lcm;
	cout << "Enter two natural numbers: ";
	cin >> n >> m;
	cout << "GCD of " << n << " and " << m << " is " << gcdFunc(n, m) << endl;
	gcdNlcm(n, m, gcd, lcm);
	cout << "GCD & LCM of " << n << " and " << m << " is " << gcd << " and " << lcm << endl;
	return 0;
}