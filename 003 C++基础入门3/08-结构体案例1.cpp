#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>   
#include<ctime>  // time(NULL)
using namespace std;
int a = 5;
struct Students
{
    string name;
    int score;
};
struct Teacher
{
    string name;
    Students Sarray[5];
};

//void allocateSpace(Teacher Tarray[], int Tlen, int Slen)
void allocateSpace(Teacher Tarray[], int Tlen)
{
    string nameSeed = "ABCDE";
    int Slen = 5;
    //����ʦ��ʼ��ֵ
    for (size_t i = 0; i < Tlen; i++)
    {
        Tarray[i].name = "Teacher_";
        Tarray[i].name += nameSeed[i];
        for (size_t j = 0; j < Slen; j++)
        {
            Tarray[i].Sarray[j].name = "Students_";
            Tarray[i].Sarray[j].name += nameSeed[j];

            // rand()% 60      ��Χ 0 ~ 59
            //rand()% 60 + 40  ��Χ 40~99
            //rand() % 61      ��Χ 0 ~ 60

            int random = rand() % 61 + 40;    // 40 ~ 100
            Tarray[i].Sarray[j].score = random;

        }
    }
}

void printInfo(Teacher teacher[], int tlen)
{
    for (size_t i = 0; i < tlen; i++)
    {
        cout << "��ʦ������" << teacher[i].name << endl;
        for (size_t j = 0; j < 5; j++)
        {
            
            cout << "\tѧ��������" << teacher[i].Sarray[j].name;
            cout << "\t\tѧ���ɼ���" << teacher[i].Sarray[j].score << endl;
        }
    }
}


int main0308()
{
    //���������
    srand((unsigned int)time(NULL));

    //1, ����3����ʦ������
    struct Teacher t[3];

    //2, ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
    int tlen = sizeof(t) / sizeof(t[0]);
    //int slen = sizeof(Sarray) / sizeof(Sarray[0]);
    //allocateSpace(t, tlen, slen);
    allocateSpace(t, tlen);

    //3,��ӡ������ʦ������ѧ����Ϣ
    printInfo(t, tlen);

    system("pause");
    return EXIT_SUCCESS;
}