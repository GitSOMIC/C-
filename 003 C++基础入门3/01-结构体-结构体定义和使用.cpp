#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
// 1������ѧ���������ͣ�ѧ�����������������䣬������
// �Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
// �﷨ struct ��������{ ��Ա�б� }
struct Student
{
    // ��Ա�б�

    // ����
    string name;
    // ����
    int age;
    // ����
    int score;


     
}s03;  // 2.3˳�㴴���ṹ�����

// 2,ͨ��ѧ�����ʹ�������ѧ��



int main0301()
{
    // 2.1 struct Student s1
    // �ṹ���������ʱstruct �ؼ��ֿ���ʡ��

    /* struct */ Student s01;

    // ��s1���Ը�ֵ��ͨ�� . ���ʽṹ������еĳ�Ա

    s01.name = "����";
    s01.age = 18;
    s01.score = 100;

    cout << "������" << s01.name << "���䣺" << s01.age << "������" << s01.score << endl;

    
    // 2.2 struct Student s2 = { "" , xx , xx  ,  xx }
     Student s02 = { "����", 19, 80 };
    
    cout << "������" << s02.name << "���䣺" << s02.age << "������" << s02.score << endl;


    // 2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����
    
    s03.name = "����";
    s03.age = 20;
    s03.score = 60;

    cout << "������" << s03.name << "���䣺" << s03.age << "������" << s03.score << endl;

    system("pause");
    return EXIT_SUCCESS;
}