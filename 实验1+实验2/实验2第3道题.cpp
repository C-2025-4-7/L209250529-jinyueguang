#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	double a, b, c, parameter;
	int equalSideCounter(0);
	cout << "Enter the length of a, b, c, respectively: ";
	cin >> a >> b >> c;
	parameter = a + b + c;
	if (a-b<1e-5) equalSideCounter++;
	if (a-c<1e-5) equalSideCounter++;
	if (b-c<1e-5) equalSideCounter++;
	cout << "周长： " << parameter << (equalSideCounter >= 2 ? " 是等腰三角形" : " 不是");
	return 0;
}