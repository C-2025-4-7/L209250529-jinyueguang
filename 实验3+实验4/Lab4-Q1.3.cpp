#include <iostream>
using namespace std;

int main() {
	bool locker[100] = { 0 };
	for (int i = 1; i <= 100; i++) {
		for (int j = i-1; j < 100; j += i) {
			locker[j] = (locker[j] == true) ? locker[j] = false : locker[j] = true;
		}
	}
	cout << "Ids of the lockers that are opened: ";
	for (int i = 0; i < 100; i++) {
		if (locker[i] == true) {
			cout << i + 1 << " "; //数组的小标号是从0开始
		}
	}
	return 0;
}