#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

// ����ѧ���ṹ��
struct student
{
    string name;
    int age;
    int score;

};
// �����ӡѧ����Ϣ����

//   1 ֵ����
void printStudent1(struct student s)
{
    //s.age = 100;
    cout << "����1ֵ������ ������   " << s.name << "���䣺   " << s.age << "����" << s.score << endl;
}
//   2 ��ַ����
void printStudent2(struct student *p)
{
    p->age = 999;
    cout << "  ����2��ַ���� ������ " << p->name << "  ����"
        << p->age << "  ������"<< p->score << endl;
}
int main0305()
{
    //�ṹ������������
    //��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ
    
    //�����ṹ�����
    struct student s;
    s.name = "����";
    s.age = 20;
    s.score = 85;

    printStudent1(s); 
    printStudent2(&s); 
    cout << "main�����д�ӡ ������   " << s.name << "���䣺   " << s.age << "������   " << s.score << endl;




    
    system("pause");
    return EXIT_SUCCESS;
}