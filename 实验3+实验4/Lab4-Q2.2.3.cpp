#include <iostream>
using namespace std;

void sorter(int* ptr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ptr[i] > ptr[j]) {
				int temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
}

int main() {
	int size;
	cout << "Size of array: ";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	sorter(arr, size);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
	delete[]arr;
	return 0;
}