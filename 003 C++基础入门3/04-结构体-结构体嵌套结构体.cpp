#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//�ȶ���ѧ���ṹ��
struct student
{
    string name;
    int age;
    int score;
};


//������ʦ�ṹ��
struct teacher
{
    int id;  // ��ʦ���
    string name; // ��ʦ����
    int age; // ��ʦ����
    struct student stu; // ������ѧ��
};
int main0304()
{
    // �ṹ��Ƕ�׽ṹ��
    teacher t;
    t.id = 10000;
    t.name = "����";
    t.age = 50;
    t.stu.name = "С��";
    t.stu.age = 20;
    t.stu.score = 60;

    cout << "��ʦ������" << t.name << "��ʦid��" << t.id
        << "��ʦ���䣺" << t.age << "��ʦ������ѧ��������"
        << t.stu.name << "ѧ�����䣺" << t.stu.age << "ѧ�����Ϸ�����"
        << t.stu.score << endl;

    system("pause");
    return EXIT_SUCCESS;
}