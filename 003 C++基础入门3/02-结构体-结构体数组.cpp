#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

// �ṹ������
// 1������ṹ��
struct Student
{
    // ����
    string name;
    //����
    int age;
    // ����
    int score;

};







int main0302()
{

    // 2�������ṹ������

    struct Student stuArray[3] =
    {
        { "����", 18, 100 },
        { "����", 28, 99 },
        { "����", 38, 66}
    };

    // 3�����ṹ�������е�Ԫ�ظ�ֵ
    stuArray[2].name = "����";
    stuArray[2].age = 80;
    stuArray[2].score = 60;

    // 4�������ṹ������
    for (size_t i = 0; i < 3; i++)
    {
        cout << " ������" << stuArray[i].name
             << " ���䣺" << stuArray[i].age
             << " ������" << stuArray[i].score << endl;
    }

    system("pause");
    return EXIT_SUCCESS;
}