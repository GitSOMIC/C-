#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//定义结构体
struct student
{
    string name;
    int age;
    int score;
};

// 将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来 
void printStudent(const student *s)
{
    //s->age = 3434;//const指针的值之后，一旦修改值就会报错，可以防止误操作
    cout << "姓名：" << s->name << " 年龄：" << s->age << " 得分：" << s->score << endl;
}
int main0306()
{
    //创建结构体变量
    struct student s = { "张三", 15, 70 };
    //通过函数打印结构体变量信息
    printStudent(&s);

    system("pause");
    return EXIT_SUCCESS;
}