#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//����Ȩ��
//����Ȩ�� public       ��Ա  ���ڿ��Է���  ������Է���
//����Ȩ�� protected    ��Ա  ���ڿ��Է���  ���ⲻ���Է��� ���ӿ��Է��ʸ����еı�������
//˽��Ȩ�� private      ��Ա  ���ڿ��Է���  ���ⲻ���Է��� ���Ӳ����Է��ʸ��׵�˽������

class People
{
public:
    //����Ȩ��
    string m_Name;
protected:
    //����Ȩ��
    string m_Car;
private:
    //˽��Ȩ��
    int m_Password;
private:
    void func()
    {
        m_Name = "����";
        m_Car = "������";
        m_Password = 123456;

    }

};


int main02()
{
    People p1;
    p1.m_Name = "����";
    //p1.m_Car //����Ȩ�����ݣ���������ʲ���
    //p1.m_Password//˽��Ȩ�����ݣ�������ʲ���

   // p1.func();//˽��Ȩ�����ݣ�������ʲ���


    system("pause");
    return EXIT_SUCCESS;
}