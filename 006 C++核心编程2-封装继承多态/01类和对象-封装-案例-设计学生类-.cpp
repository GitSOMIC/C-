#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//PI
const double PI = 3.14;
//1,封装的意义
//将属性和行为作为一个整体，用来表现生活中的事物

//封装一个学生类，可以给姓名和学号赋值，可以显示学生的姓名和学号
//class代表设计一个类，后面跟着的是类名

class students
{
    //访问权限
    public://公共权限：：：： 

        //类中的属性和行为，我们统一称为  成员

    //属性 （成员属性 成员变量）
    string Name;//姓名
    string studentID;//学号
    //行为 （成员函数  成员方法）
    //显示姓名学号
    void Show()
    {
        cout << "Name " << Name << endl;
        cout << "studentID " << studentID << endl;
    }
    //通过函数给属性赋值
    void setName(string name)
    {
        Name = name;
    }
    void setID(string ID)
    {
        studentID = ID;
    }

};
int main01()
{
    //通过学生类，创建学生的对象，实例化对象
    //std1就是一个具体的学生对象
    students std1;
    //给std对象，进行属性赋值操作
    std1.Name = "dijksitra";
    std1.studentID = "111111111111";
    //显示学生信息
    std1.Show();

    students std2;
    std2.Name = "李四";
    std2.studentID = "22222222222";
    std2.Show();

    students std3;
    std3.setID("3333333");
    std3.setName("张三");
    std3.Show();
    system("pause");
    return EXIT_SUCCESS;
}