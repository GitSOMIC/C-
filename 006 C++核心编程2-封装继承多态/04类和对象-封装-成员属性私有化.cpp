#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ��������Ч��

//�������
class People
{
public:
    //��������
    void setName(string name)
    {
        m_Name = name;
    }
    //��ȡ����
    string getName()
    {
        return m_Name;
    }
    //��������
    // ������޸ģ����䷶Χ������0~150��
    void setAge(int Age)
    {
        if (Age < 0 || Age > 150)
        {
            cout << "����0~150" << endl;
            return;
        }
        m_Age = Age;
    }
    //��ȡ����
    int getAge()
    {
        m_Age = 0;      //��ʼ��
        return m_Age;
    }
    //��������
    void setLover(string Lover)
    {
        m_Lover = Lover;
    }
private:
    //����    �ɶ���д
    string m_Name;
     //����   �ɶ��ɶ�
    int m_Age;
    //����    ֻд
    string m_Lover;
};

int main()
{
    People p;
    //p.m_Name 
    p.setName("����");
    cout << "����Ϊ��" << p.getName() << endl;
    p.setAge(12);
    cout << "����Ϊ��" << p.getAge() << endl;

    p.setLover("b");
    //cout << p.m_Lover << endl;//���ɷ���
    system("pause");
    return EXIT_SUCCESS;
}