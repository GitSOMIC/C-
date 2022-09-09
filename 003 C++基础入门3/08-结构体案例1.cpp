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
    //给老师开始赋值
    for (size_t i = 0; i < Tlen; i++)
    {
        Tarray[i].name = "Teacher_";
        Tarray[i].name += nameSeed[i];
        for (size_t j = 0; j < Slen; j++)
        {
            Tarray[i].Sarray[j].name = "Students_";
            Tarray[i].Sarray[j].name += nameSeed[j];

            // rand()% 60      范围 0 ~ 59
            //rand()% 60 + 40  范围 40~99
            //rand() % 61      范围 0 ~ 60

            int random = rand() % 61 + 40;    // 40 ~ 100
            Tarray[i].Sarray[j].score = random;

        }
    }
}

void printInfo(Teacher teacher[], int tlen)
{
    for (size_t i = 0; i < tlen; i++)
    {
        cout << "老师姓名：" << teacher[i].name << endl;
        for (size_t j = 0; j < 5; j++)
        {
            
            cout << "\t学生姓名：" << teacher[i].Sarray[j].name;
            cout << "\t\t学生成绩：" << teacher[i].Sarray[j].score << endl;
        }
    }
}


int main0308()
{
    //随机数种子
    srand((unsigned int)time(NULL));

    //1, 创建3名老师的数组
    struct Teacher t[3];

    //2, 通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
    int tlen = sizeof(t) / sizeof(t[0]);
    //int slen = sizeof(Sarray) / sizeof(Sarray[0]);
    //allocateSpace(t, tlen, slen);
    allocateSpace(t, tlen);

    //3,打印所有老师及所带学生信息
    printInfo(t, tlen);

    system("pause");
    return EXIT_SUCCESS;
}