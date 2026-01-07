#include <iostream>

using namespace std;

class Cupoid {
	private:
		double length;
		double width;
		double height;
		double volume;
	public:
		Cupoid(double length = 0, double width = 0, double height = 0) {
			this->length = length;
			this->width = width;
			this->height = height;
		}
		void inputData() {
			cin >> length >> width >> height;
		}
		double calculate() {
			volume = length * width * height;
			return volume;
		}
};


int main() {
	Cupoid cubes[3];
	for (int i = 0; i < 3; i++) {
		cout << "Enter the data for cube " << i + 1 << ": ";
		cubes[i].inputData();
	}
	for (int i = 0; i < 3; i++) {
		cout << "the volume of cube " << i + 1 << ": " << cubes[i].calculate() << endl;
	}
	return 0;
}