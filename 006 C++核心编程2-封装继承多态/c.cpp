#include"circle.h"


//Բ��

//class Circle   
//{
//public:

    //���ð뾶
void Circle::setR(int r)   // ���º������� ����Ϊ��Ա����
{
    m_R = r;
}
//��ȡ�뾶
int Circle::getR()
{
    return m_R;
}
//����Բ��
void Circle::setCenter(Point center)
{
    m_Center = center;
}
//��ȡԲ��
Point Circle::getCenter()
{
    return m_Center;
}


//private:
//    int m_R;//�뾶
//    Point m_Center;
//
//};