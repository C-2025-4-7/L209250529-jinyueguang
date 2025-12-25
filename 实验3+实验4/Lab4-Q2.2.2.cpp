#include <iostream>
#include <cstring>
using namespace std;

int parseHex(const char* const hexString) {
	int strSize = strlen(hexString);
	int value = 0;
	for (int i = 0; i < strSize; i++) {
		int digitNum;
		if (hexString[i] >= 'A' && hexString[i] <= 'F') {
			digitNum = int(hexString[i]) - int('A') + 10;
		}
		else if (hexString[i] >= 'a' && hexString[i] <= 'f') { 
			digitNum = int(hexString[i]) - int('a') + 10;
		}
		else if (hexString[i] >= '0' && hexString[i] <= '9') {
			digitNum = int(hexString[i]) - int('0');
		}
		else { 
			return -1;
		}
		int powerValue = 1;
		for (int j = i; j < strSize-1; j++) {
			powerValue *= 16;
		}
		value += digitNum * powerValue;
	}
	return value;
}

int main() {
	cout << parseHex("A5");
}