#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//成员属性设置为私有
//1，可以自己控制读写权限
//2，对于写可以检测数据有效性

//设计人类
class People
{
public:
    //设置姓名
    void setName(string name)
    {
        m_Name = name;
    }
    //获取姓名
    string getName()
    {
        return m_Name;
    }
    //设置年龄
    // 如果想修改（年龄范围必须是0~150）
    void setAge(int Age)
    {
        if (Age < 0 || Age > 150)
        {
            cout << "输入0~150" << endl;
            return;
        }
        m_Age = Age;
    }
    //获取年龄
    int getAge()
    {
        m_Age = 0;      //初始化
        return m_Age;
    }
    //设置情人
    void setLover(string Lover)
    {
        m_Lover = Lover;
    }
private:
    //姓名    可读可写
    string m_Name;
     //年龄   可读可读
    int m_Age;
    //情人    只写
    string m_Lover;
};

int main()
{
    People p;
    //p.m_Name 
    p.setName("张三");
    cout << "姓名为：" << p.getName() << endl;
    p.setAge(12);
    cout << "年龄为：" << p.getAge() << endl;

    p.setLover("b");
    //cout << p.m_Lover << endl;//不可访问
    system("pause");
    return EXIT_SUCCESS;
}