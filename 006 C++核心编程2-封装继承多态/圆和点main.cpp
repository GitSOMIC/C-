#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"circle.h"
#include"point.h"
using namespace std;
//�жϵ��Բ��ϵ
void isInCircle(Circle& c, Point& p)
{

    ////�ռ任ʱ��
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
        (c.getCenter().getY()) - p.getY() * (c.getCenter().getY() - p.getY());
    int rDistance = c.getR() * c.getR();
    if (distance == rDistance)
    {
        cout << "����Բ��" << endl;

    }
    else if (distance < rDistance)

    {
        cout << "����Բ��" << endl;
    }
    else
    {
        cout << "����Բ��" << endl;
    }

}
int main()
{
    //����Բ
    Circle c;
    c.setR(10);
    //����Բ�ĵ�
    Point p;
    p.setX(10);
    p.setY(0);
    c.setCenter(p);
    //������
    Point p1;
    p1.setX(10);
    p1.setY(10);
    //����������Բ�Ĺ�ϵ
    isInCircle(c, p1);


    system("pause");
    return EXIT_SUCCESS;
}