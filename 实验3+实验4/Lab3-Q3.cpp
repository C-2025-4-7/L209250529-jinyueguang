#include <iostream>
#include <iomanip>
using namespace std;
#include "mytemperature.h"
enum choice { cTOf = 1, fTOc, exitProgram = -1 };
int main()
{
	double celList[3] = { 40.0, 39.0, 31.0 };
	double fahList[3] = { 120.0, 110.0, 30.0 };
	cout << "Celsius " << " Fahrenheit" << "|" << "Fahrenheit " << " Celsius" << endl;
	for (int i = 0; i < 3; i++) {
		cout << celList[i] << " \t " << celsius_to_fah(celList[i]) << " \t " << " | " << fahList[i] << " \t " << fahrenheit_to_cels(fahList[i]) << endl;
	}
	return 0;

}
