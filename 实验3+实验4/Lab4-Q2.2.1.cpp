#include <iostream>
using namespace std;

int indexof(const char* s1, const char* s2) {
	int lengthS1 = strlen(s1);
	int lengthS2 = strlen(s2);
	if (lengthS1 > lengthS2) return -1;
	for (int i = 0; i <= lengthS2 - lengthS1 + 1; i++) {
		if (s1[0] == s2[i]) {
			cout << "found 1st character" << endl;
			bool found = true;
			for (int j = 1; j < lengthS1; j++) {
				if (s1[j] != s2[j + i]) {
					found = false;
					cout << "mismatching found" << endl;
				}
			}
			if (found) {
				return i;
			}
		}
	}
	return -1;
}

int main() {
	const int size = 100;
	char str1[size], str2[size];
	cout << "Enter the first string:";
	cin.getline(str1, size);
	cout << "Enter the second string:";
	cin.getline(str2, size);
	cout << "indexOf \"" << str1 << "\" and \"" << str2 << "\" is: " << indexof(str1, str2);
	return 0;
}