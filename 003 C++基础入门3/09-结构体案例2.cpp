#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//1,设计英雄结构体
struct Legend
{
    string name;
    int age;
    string gender;
};
//2，按照年龄排序
void Bubble_Sort(Legend The_Three_Kingdoms[], int len)
{
    for (size_t i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            
            if (The_Three_Kingdoms[j].age > The_Three_Kingdoms[j+1].age)
            {
                 
                Legend temp = The_Three_Kingdoms[j+1];
                The_Three_Kingdoms[j + 1] = The_Three_Kingdoms[j];
                The_Three_Kingdoms[j] = temp;
            }
            
        }
    }
}
//3，打印输出
void Pint(Legend The_Three_kingdoms[], int len)
{
    for (size_t i = 0; i < len; i++)
    {
        cout << " 姓名：" <<The_Three_kingdoms[i].name
            << " 年龄：" << The_Three_kingdoms[i].age
            << " 性别：" << The_Three_kingdoms[i].gender << endl;
    }
}

int main()
{
    Legend The_Three_Kingdoms[5] =
    {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"}
    };
    
    int len = sizeof(The_Three_Kingdoms) / sizeof(The_Three_Kingdoms[2]);

    Bubble_Sort(The_Three_Kingdoms, len);

    Pint(The_Three_Kingdoms, len);


    system("pause");
    return EXIT_SUCCESS;
}