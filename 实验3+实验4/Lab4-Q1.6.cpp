#include <iostream>
#include <cctype>
#include <cstring>
#define numberOfAlphabets 26
using namespace std;
void count(const char s[], int counts[]) {
	int size = strlen(s);
	for (int i = 0; i < size; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') { 
			counts[int(s[i]) - 'a']++;
		}
		if (s[i] >= 'A' && s[i] <= 'Z') { 
			counts[int(s[i]) - 'A']++;
		}
	}
	for (int i = 0; i < numberOfAlphabets; i++) {
		if (counts[i] != 0) {
			cout << char('a' + i) << ":" << counts[i] << "times" << endl;
		}
	}
}

int main() {
	int counter[numberOfAlphabets] = { 0 };
	char str[100];
	cout << "Enter a string: ";
	cin.getline(str, 100);
	count(str, counter);
	return 0;
}	

