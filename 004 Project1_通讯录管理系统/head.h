#pragma once

//111
#define MAX 1000	//�������
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;







// �ṹ��ṹ
struct Person
{
	string m_Name;  //����
	int m_Gender;	//�Ա�  1�� 2Ů
	int m_Age;	//����
	string m_Phone;	//�绰��
	string m_Addr;	//��ַ
};

struct Addressbooks
{
	int m_Size; //ͨѶ¼��Ա����
	struct Person personArray[MAX];//ͨѶ¼�б������ϵ�˽ṹ������
};



// ��������
void ShowMenu();
void addPerson(Addressbooks* abs);
void ShowPerson(Addressbooks* abs, int len);
int ExistLocation(Addressbooks* abs, string Name);
void DeletPerson(Addressbooks* abs, string Name);
void FindPerson(Addressbooks* abs);
void ModifyPerson(Addressbooks* abs);
void CleanPerson(Addressbooks* abs);