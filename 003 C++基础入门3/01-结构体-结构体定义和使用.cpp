#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
// 1，创建学生数据类型：学生包括（姓名，年龄，分数）
// 自定义数据类型，一些类型集合组成的一个类型
// 语法 struct 类型名称{ 成员列表 }
struct Student
{
    // 成员列表

    // 姓名
    string name;
    // 年龄
    int age;
    // 分数
    int score;


     
}s03;  // 2.3顺便创建结构体变量

// 2,通过学生类型创建具体学生



int main0301()
{
    // 2.1 struct Student s1
    // 结构体变量创建时struct 关键字可以省略

    /* struct */ Student s01;

    // 给s1属性赋值，通过 . 访问结构体变量中的成员

    s01.name = "张三";
    s01.age = 18;
    s01.score = 100;

    cout << "姓名：" << s01.name << "年龄：" << s01.age << "分数：" << s01.score << endl;

    
    // 2.2 struct Student s2 = { "" , xx , xx  ,  xx }
     Student s02 = { "李四", 19, 80 };
    
    cout << "姓名：" << s02.name << "年龄：" << s02.age << "分数：" << s02.score << endl;


    // 2.3 在定义结构体时顺便创建结构体变量
    
    s03.name = "王五";
    s03.age = 20;
    s03.score = 60;

    cout << "姓名：" << s03.name << "年龄：" << s03.age << "分数：" << s03.score << endl;

    system("pause");
    return EXIT_SUCCESS;
}