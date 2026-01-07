#include <iostream>
using namespace std;

class Student {
	private: 
		int id;
		int grade;
	public:
		void input() {
			cin >> id >> grade;
		}
		friend int max(Student* ptr);
};

int max(Student* ptr) {
	int temp = ptr[0].grade;
	int id = ptr[0].id;
	for (int i = 1; i < 5; i++) {
		if (ptr[i].grade > temp) {
			temp = ptr[i].grade;
			id = ptr[i].id;
		}
	}
	return id;
}

int main() {
	Student students[5];
	for (int i = 0; i < 5; i++) {
		cout << "input student" << i + 1 << "'s id and grade: ";
		students[i].input();
	}
	cout << "id of the student with the highest score: " << max(students);
}