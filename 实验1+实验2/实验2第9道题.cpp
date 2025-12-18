#include <iostream>
using namespace std;
#define price 0.8

int main() {
	double spending = price;
	int appleCounter = 1, dayCounter = 1;
	while (appleCounter <= 100) {
		dayCounter++;
		appleCounter = appleCounter * 2;
		spending = appleCounter * price;
	}
	double meduim = spending / dayCounter;
	cout << meduim;
	return 0;
}	