#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char s1[], const char s2[]);

int main() {
	const int size = 100;
	char str1[size], str2[size];
	cout << "Enter the first string:";
	cin.getline(str1, size);
	cout << "Enter the second string:";
	cin.getline(str2, size);
	cout << "indexOf \"" << str1 << "\" in \"" << str2 << "\" is: " << indexOf(str1, str2);
	return 0;
}

int indexOf(const char s1[], const char s2[]) {
	int lengthS1 = strlen(s1);
	int lengthS2 = strlen(s2);
	if (lengthS1 > lengthS2) return -1;
	for (int i = 0; i <= lengthS2 - lengthS1 + 1; i++) {
		if (s1[0] == s2[i]) {
			bool found = true;
			for (int j = 1; j < lengthS1; j++) {
				if (s1[j] != s2[j + i]) {
					found = false;
				}
			}
			if (found) {
				return i;
			}
		} 
	}
		return -1;
}