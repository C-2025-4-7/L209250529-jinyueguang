#include <iostream>
using namespace std;

int peachEaten(int day) {
	int amount;
	if (day == 10) amount = 1;
	else amount = (peachEaten(day+1) + 1) * 2;
	return amount;
}

int main() {
	cout << "number of peaches eaten on the 1st day: " << peachEaten(1);
	return 0;
}