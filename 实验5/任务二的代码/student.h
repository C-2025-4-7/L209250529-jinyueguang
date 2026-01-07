class Student {
private:
    int num;
    char name[20];
    char sex;
    
public:
    // 构造函数声明（默认参数在这里指定）
    Student(int num = 0, const char* name = "", char sex = '\0');
    
    void display();
    void set_value(int num, const char* name, char sex);
};