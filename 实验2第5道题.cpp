#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main() {
	char c;
	cout << "enter a line of characters: ";
	cin.get(c);
	int letterCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;
	for (int i = 0; i < sizeof(c); i++) {
		if (isalpha(c)) {
			letterCount++;
		}
		else if (isspace(c)) {
			spaceCount++;
		}
		else if (isdigit(c)) {
			digitCount++;
		}
		else {
			otherCount++;
		}
	}
	cout << "letters: " << letterCount << endl;
	cout << "spaces: " << spaceCount << endl;
	cout << "digits: " << digitCount << endl;
	cout << "others: " << otherCount << endl;
	return 0;
}