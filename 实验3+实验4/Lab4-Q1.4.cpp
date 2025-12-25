#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i + 1];
	}
	for (int i = 0; i < size2; i++) {
		list3[size1+ i] = list2[i + 1];
	}
	for (int i = 0; i < size1 + size2 - 1; i++) {
		for (int j = i + 1; j < size1 + size2; j++) {
			if (list3[i] > list3[j]) {
				int temp = list3[i];
				list3[i] = list3[j];
				list3[j] = temp;
			}
		}
	}
}

int main() {
	int	list1[80] = { 0 }, list2[80] = { 0 };
	cout << "Enter list1: ";
	cin >> list1[0];
	int sizeL1 = list1[0];
	for (int i = 1; i < sizeL1 + 1; i++) {
		cin >> list1[i];
	}
	cout << "Enter list2: ";
	cin >> list2[0];
	int sizeL2 = list2[0];
	for (int i = 1; i < sizeL2 + 1; i++) {
		cin >> list2[i];
	}
	int* list3 = new int[sizeL1 + sizeL2] {0};
	merge(list1, sizeL1, list2, sizeL2, list3);
	for (int i = 0; i < sizeL1 + sizeL2; i++) {
		cout << list3[i] << " ";
	}
	delete[] list3;
	return 0;
}