/*	求圆锥的体积
	存盘：C:\Users\Ponleur\Desktop\myCode\c++4vs\实验1\实验1二导体\实验1二导体.cpp*/

#include <iostream>
using namespace std;
#define PI 3.14 //圆周率

int main() 
{
	int r, h;
	cout << "enter radius of cone: ";
	cin >> r; //底的半径
	cout << "enter height of cone: ";
	cin >> h; //锥高
	double v = (1.0 / 3) * PI * r * r * h; //体积
	cout << "the volume of cone is: " << v << endl;

	return 0;
}