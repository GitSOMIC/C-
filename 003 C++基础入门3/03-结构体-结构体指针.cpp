#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

// �ṹ��ָ��

// ����ѧ���ṹ��
struct Student
{
    string name; // ����
    int age;// ����
    int score;// ����

};


int main0303()
{
    // 1������ѧ���ṹ�����
    Student s = { "����", 18, 100 };
    
    // 2��ͨ��ָ��ָ��ṹ�����
     
     Student* p = &s;
    
    // 3��ͨ��ָ����ʽṹ������е�����    ->

     // ͨ���ṹ��ָ�� ���ʽṹ���е����ԣ���Ҫ���� �� -> ��
     cout << "������" << p->name << " ���䣺" << p->age << "������" << p->score << endl;

    system("pause");
    return EXIT_SUCCESS;
}