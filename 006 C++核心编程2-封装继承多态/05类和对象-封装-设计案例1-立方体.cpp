#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Cube
{
public:
    //���������
    int get_Volume()
    {
        return (m_H * m_L * m_W);
    }
    int get_Area()
    {
        return 2 * (m_H * m_L + m_H * m_W + m_L * m_W);
    }
    //�ڽṹ�庯���ڶԱȣ�˫���룩
    void Identical(Cube& a, Cube& b)
    {
        if (a.m_H == b.m_H && a.m_L == b.m_L && a.m_W == b.m_W)
        {
            cout << "�ڽṹ�庯���ڶԱȣ�˫���룩  ����Cube��ͬ" << endl;
            return;
        }
        cout << "�ڽṹ�庯���ڶԱȣ�˫���룩  ����Cube����ͬ" << endl;
    }
    //�ڽṹ�庯���ڶԱȣ������룩
    bool the_sameby_Class(Cube& c)
    {
        if (m_H==c.show('H')&& m_L == c.show('L')&&m_W == c.show('W'))
        {
            return true;
        }
        return false;
    }
    //���볤���
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
    //��������
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
    //����
    int m_H;
    int m_L;
    int m_W;
};
//ȫ�ֺ����Ա�
void Identical(Cube& a, Cube& b)
{
    
    if (a.show('H') == b.show('H') && a.show('L') == b.show('L') && a.show('W') == b.show('W'))
    {
        cout << "//ȫ�ֺ����Ա�   ����Cube��ͬ" << endl;
        return;
    }
    cout << "//ȫ�ֺ����Ա�   ����Cube����ͬ" << endl;
}
int main()
{
    //�������������
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
        cout << "�ڽṹ�庯���ڶԱȣ������룩 �����" << endl;
    }
    else
    {
        cout << "�ڽṹ�庯���ڶԱȣ������룩 �����" << endl;
    }
    system("pause");
    return EXIT_SUCCESS;
}