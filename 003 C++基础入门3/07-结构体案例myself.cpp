#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
// 学生结构体
struct Students 
{
    string Sname;
    int score;

};
//老师结构体
struct Teacher
{
    string Tname;
    struct Students s[5];
};

void inputdata(struct Teacher  t[])
{

    for (size_t i = 0; i < 3; i++)
    {
        t[i].Tname = "a";
        for (size_t j = 0; j < 5; j++)
        {
             t[i].s[j].Sname = "b";
             t[i].s[j].score = 1 ;

        }
    }
/*
        for (size_t i = 0; i < 3; i++)
    {
        cin >> t[i].Tname;
        for (size_t j = 0; j < 5; j++)
        {
            cin >> t[i].s[j].Sname;
            cin >> t[i].s[j].score;

        }
    }
*/
}

int main0307()
{
    struct Teacher t[3];

    inputdata(t);
    for (size_t i = 0; i < 3; i++)
    {
        cout << "老师姓名:" << t[i].Tname<<endl;
        for (size_t j = 0; j < 5; j++)
        {
            cout << "    学生姓名：" << t[i].s[j].Sname << endl;
            cout << "    学生分数;"<< t[i].s[j].score << endl;

        }
    }

    system("pause");
    return EXIT_SUCCESS;
}