#include<iostream>
using namespace std;

void sorter(double list[], int listSize) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				//swap list[j] with list[j + 1]
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}

int main() {
	cout << "input value: ";
	double arr[10] = { 0 };
	for (int i = 0; i < 10; i++) cin >> arr[i];
	sorter(arr, 10);
	for (int i = 0; i < 10; i++) cout << arr[i] << " ";
	return 0;
}
