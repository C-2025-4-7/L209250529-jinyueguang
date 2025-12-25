#include<iostream>
using namespace std;

bool is_prime(int num) {
	if (num !=2 && num % 2 == 0) return false;
	for (int i = num/2; i >= 3; i --) {
		if (num % i == 0) return false;
	}
	return true;
}

int main()
{
	int primeArray[100] = { 0 };
	for (int i = 2, counter = 0; counter < 100; i++) {
		if (is_prime(i)) {
			primeArray[counter] = i;
			counter++;
		}
	}
	for (int i = 0, counter = 0; i < 100; i++) {
		cout << primeArray[i] << " ";
		counter++;
		if (counter % 10 == 0) cout << endl;
	}
	return 0;
}