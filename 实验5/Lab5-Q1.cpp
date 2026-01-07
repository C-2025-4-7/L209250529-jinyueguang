#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void inputTime() {
		cout << "hour: ";
		cin >> hour;
		cout << "minute: ";
		cin >> minute;
		cout << "second: ";
		cin >> sec;
	}
	void showTime() {
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.inputTime();
	t1.showTime();
	return 0;
}