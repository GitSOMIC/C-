#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//����ṹ��
struct student
{
    string name;
    int age;
    int score;
};

// �������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ������� 
void printStudent(const student *s)
{
    //s->age = 3434;//constָ���ֵ֮��һ���޸�ֵ�ͻᱨ�����Է�ֹ�����
    cout << "������" << s->name << " ���䣺" << s->age << " �÷֣�" << s->score << endl;
}
int main0306()
{
    //�����ṹ�����
    struct student s = { "����", 15, 70 };
    //ͨ��������ӡ�ṹ�������Ϣ
    printStudent(&s);

    system("pause");
    return EXIT_SUCCESS;
}