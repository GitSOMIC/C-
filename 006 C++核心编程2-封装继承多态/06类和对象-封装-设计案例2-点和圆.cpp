#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//����
class Point
{
public:
    //����x
    void setX(int x)
    {
        m_X = x;
    }
    //��ȡx
    int getX()
    {
        return m_X;
    }
    //����y
    void setY(int y)
    {
        m_Y = y;
    }
    //��ȡy
    int getY()
    {
        return m_Y;
    }
private:
    int m_X;
    int m_Y;
};
//Բ��
class Circle
{
public:
    //���ð뾶
    void setR(int r)
    {
        m_R = r;
     }
    //��ȡ�뾶
    int getR()
    {
        return m_R;
    }
    //����Բ��
    void setCenter(Point center)
    {
        m_Center = center;
    }
    //��ȡԲ��
    Point getCenter()
    {
        return m_Center;
    }
private:
    int m_R;//�뾶

    //�����п�������һ���࣬��Ϊ�����еĳ�Ա
    Point m_Center;//Բ��

};
//�жϵ��Բ��ϵ
void isInCircle(Circle &c, Point &p)
{

    ////�ռ任ʱ��
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
                   (c.getCenter().getY()) - p.getY() *(c.getCenter().getY() - p.getY());
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
    // 
    //ʱ�任�ռ�
    // 
    //if (c.getR() * c.getR() ==
    //    (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
    //    (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY()))
    //{
    //    cout << "����Բ��" << endl;

    //}
    //else if (c.getR() * c.getR() >
    //    (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
    //    (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY()))

    //{
    //    cout << "����Բ��" << endl;
    //}
    //else
    //{
    //    cout << "����Բ��" << endl;
    //}
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