#include <iostream>
using namespace std;

int main(){
	int a, b, lcm, gcd;
	cout << "Enter two integers: ";
	cin >> a >> b;
	for (int i = 1; i <= a && i <= b; i++){
		if (a % i == 0 && b % i == 0){
			gcd = i;
		}
	}
	for (int i = (a > b ? a : b); i <= a * b; i++){
		if (i % a == 0 && i % b == 0){
			lcm = i;
			break;
		}
	}
	cout << "GCD: " << gcd << " LCM: " << lcm << endl;
	return 0;
}