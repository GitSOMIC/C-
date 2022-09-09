#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//先定义学生结构体
struct student
{
    string name;
    int age;
    int score;
};


//定义老师结构体
struct teacher
{
    int id;  // 教师编号
    string name; // 教师姓名
    int age; // 教师年龄
    struct student stu; // 辅导的学生
};
int main0304()
{
    // 结构体嵌套结构体
    teacher t;
    t.id = 10000;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 60;

    cout << "老师姓名：" << t.name << "老师id：" << t.id
        << "老师年龄：" << t.age << "老师辅导的学生姓名："
        << t.stu.name << "学生年龄：" << t.stu.age << "学生考上分数："
        << t.stu.score << endl;

    system("pause");
    return EXIT_SUCCESS;
}