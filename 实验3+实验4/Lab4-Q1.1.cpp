#include<iostream>
using namespace std;

int main() {
	int inputArr[10], counter = 0;
	cout << "Enter 10 numbers: ";
	for (int i = 0; i < 10; i++) {
		cin >> inputArr[i];
	}
	int sortedArr[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		bool satisfy = 1;
		if (i == 0) sortedArr[counter++] = inputArr[i];
		else {
			for (int j = 0; j < counter; j++) {
				if (inputArr[i] == sortedArr[j]) satisfy = false;
			}
			if (satisfy) sortedArr[counter++] = inputArr[i];
		}
	}
	cout << "The distinct numbers are: ";
	for (int i = 0; i < counter; i++) {
		cout << sortedArr[i] << " ";
	}
	return 0;
}