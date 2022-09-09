#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Cube
{
public:
    //输出面积体积
    int get_Volume()
    {
        return (m_H * m_L * m_W);
    }
    int get_Area()
    {
        return 2 * (m_H * m_L + m_H * m_W + m_L * m_W);
    }
    //在结构体函数内对比（双输入）
    void Identical(Cube& a, Cube& b)
    {
        if (a.m_H == b.m_H && a.m_L == b.m_L && a.m_W == b.m_W)
        {
            cout << "在结构体函数内对比（双输入）  两个Cube相同" << endl;
            return;
        }
        cout << "在结构体函数内对比（双输入）  两个Cube不相同" << endl;
    }
    //在结构体函数内对比（单输入）
    bool the_sameby_Class(Cube& c)
    {
        if (m_H==c.show('H')&& m_L == c.show('L')&&m_W == c.show('W'))
        {
            return true;
        }
        return false;
    }
    //输入长宽高
    void get_H(int number)
    {
        m_H = number;
    }
    void get_L(int number)
    {
        m_L = number;
    }
    void get_W(int number)
    {
        m_W = number;
    }
    //输出长宽高
    int show(char A)
    {
        if (A == 'H')
        {
            return m_H;
        }
        if (A == 'L')
        {
            return m_L;
        }
        if (A == 'W')
        {
            return m_W;
        }
        
    }
private:
    //属性
    int m_H;
    int m_L;
    int m_W;
};
//全局函数对比
void Identical(Cube& a, Cube& b)
{
    
    if (a.show('H') == b.show('H') && a.show('L') == b.show('L') && a.show('W') == b.show('W'))
    {
        cout << "//全局函数对比   两个Cube相同" << endl;
        return;
    }
    cout << "//全局函数对比   两个Cube不相同" << endl;
}
int main()
{
    //创建立方体对象
    Cube c1;
    c1.get_H(2);
    c1.get_L(2);
    c1.get_W(2);
    Cube c2;
    c2.get_H(2);
    c2.get_L(2);
    c2.get_W(2);

    cout << "c1 of Area is:"<< c1.get_Area()<<endl;
    cout << "c1 of Volume is:" << c1.get_Volume()<< endl;
     cout << "c2 of Area is:"<< c2.get_Area() <<endl;
     cout << "c2 of Volume is:" << c2.get_Volume()<< endl;

    c1.Identical(c1, c2);
    Identical(c1, c2);

    if (c1.the_sameby_Class(c2))
    {
        cout << "在结构体函数内对比（单输入） 是相等" << endl;
    }
    else
    {
        cout << "在结构体函数内对比（单输入） 不相等" << endl;
    }
    system("pause");
    return EXIT_SUCCESS;
}