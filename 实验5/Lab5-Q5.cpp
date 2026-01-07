#include <iostream>
using namespace std;

class Point {
	private:
		int x, y;
	public:
		Point(int x, int y) {
			this->x = x;
			this->y = y;
			cout << "constructed point: (" << x << "," << y << ")" << endl;
		}
		void setPoint(int i, int j) {
			x += i;
			y += j;
			cout << "added " << i << " to x, added " << j << " to y" << endl;
		}
		void display() {
			cout << "x: " << x << " y: " << y << endl;
		}
};

int main() {
	Point point1(6, 7);
	point1.setPoint(10, 12);
	point1.display();
	return 0;
}

