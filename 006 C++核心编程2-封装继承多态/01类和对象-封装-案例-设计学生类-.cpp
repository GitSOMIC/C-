#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//PI
const double PI = 3.14;
//1,��װ������
//�����Ժ���Ϊ��Ϊһ�����壬�������������е�����

//��װһ��ѧ���࣬���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
//class�������һ���࣬������ŵ�������

class students
{
    //����Ȩ��
    public://����Ȩ�ޣ������� 

        //���е����Ժ���Ϊ������ͳһ��Ϊ  ��Ա

    //���� ����Ա���� ��Ա������
    string Name;//����
    string studentID;//ѧ��
    //��Ϊ ����Ա����  ��Ա������
    //��ʾ����ѧ��
    void Show()
    {
        cout << "Name " << Name << endl;
        cout << "studentID " << studentID << endl;
    }
    //ͨ�����������Ը�ֵ
    void setName(string name)
    {
        Name = name;
    }
    void setID(string ID)
    {
        studentID = ID;
    }

};
int main01()
{
    //ͨ��ѧ���࣬����ѧ���Ķ���ʵ��������
    //std1����һ�������ѧ������
    students std1;
    //��std���󣬽������Ը�ֵ����
    std1.Name = "dijksitra";
    std1.studentID = "111111111111";
    //��ʾѧ����Ϣ
    std1.Show();

    students std2;
    std2.Name = "����";
    std2.studentID = "22222222222";
    std2.Show();

    students std3;
    std3.setID("3333333");
    std3.setName("����");
    std3.Show();
    system("pause");
    return EXIT_SUCCESS;
}