#include <iostream>
using namespace std;

int main() {
	char c;
	cout << "enter a character: ";
	cin >> c;
	int charValue = c;
	if (charValue >= 97 && charValue <= 122) {
		cout << (char)(c - 32);
	}
	else if (charValue >= 65 && charValue <= 90) {
		cout << (char)(c + 1);
	}
	else {
		cout << "Invalid character";
	}
}