#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
	//（这里的 << oct被注释了，testUnint 不会改成8进制的数字）
		cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	//（char 的标识范围是0 - 255， 由于给出的数字超过范围，输出会出现奇怪字符）
		cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?: （因为 unsigned int 被转化为 short signed int, 编译器把65534的二进制的1和0互相交换）
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	//（代码正常运行）（数字不超过范围）
		cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	//（代码正常运行）（数字不超过范围）
		cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	//（精度被设置为4，将e用到数字的表达式表示10的幂）
		cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
	//（数字被转化为16进制） //16进制输出
		cout << "output in Oct unsigned int type:" << oct << testUnint << endl;//8进制输出
	//将实数变成int 
	float decimal = 65.4321;
	int intDecimal = static_cast<int>(decimal);
	cout << "output float 65.4321 to int type:" << intDecimal << endl;
	system("pause");
	return 0;
}
