#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//1,���Ӣ�۽ṹ��
struct Legend
{
    string name;
    int age;
    string gender;
};
//2��������������
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
//3����ӡ���
void Pint(Legend The_Three_kingdoms[], int len)
{
    for (size_t i = 0; i < len; i++)
    {
        cout << " ������" <<The_Three_kingdoms[i].name
            << " ���䣺" << The_Three_kingdoms[i].age
            << " �Ա�" << The_Three_kingdoms[i].gender << endl;
    }
}

int main()
{
    Legend The_Three_Kingdoms[5] =
    {
        {"����",23,"��"},
        {"����",22,"��"},
        {"�ŷ�",20,"��"},
        {"����",21,"��"},
        {"����",19,"Ů"}
    };
    
    int len = sizeof(The_Three_Kingdoms) / sizeof(The_Three_Kingdoms[2]);

    Bubble_Sort(The_Three_Kingdoms, len);

    Pint(The_Three_Kingdoms, len);


    system("pause");
    return EXIT_SUCCESS;
}