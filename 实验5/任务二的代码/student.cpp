#include <iostream>
#include "student.h"           //不要漏写此行，否则编译通不过
#include <cstring>
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}

Student::Student(int num, const char* name, char sex) {
    this->num = num;
    memcpy(this->name, name, 20);
    this->sex = sex;
}


void Student::set_value(int num, const char* name, char sex)
{
    this->num = num;
    memcpy(this->name, name, 20);
    this->sex = sex;
}