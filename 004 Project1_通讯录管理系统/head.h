#pragma once

//111
#define MAX 1000	//最大人数
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;







// 结构体结构
struct Person
{
	string m_Name;  //姓名
	int m_Gender;	//性别  1男 2女
	int m_Age;	//年龄
	string m_Phone;	//电话号
	string m_Addr;	//地址
};

struct Addressbooks
{
	int m_Size; //通讯录人员个数
	struct Person personArray[MAX];//通讯录中保存的联系人结构体数组
};



// 函数声明
void ShowMenu();
void addPerson(Addressbooks* abs);
void ShowPerson(Addressbooks* abs, int len);
int ExistLocation(Addressbooks* abs, string Name);
void DeletPerson(Addressbooks* abs, string Name);
void FindPerson(Addressbooks* abs);
void ModifyPerson(Addressbooks* abs);
void CleanPerson(Addressbooks* abs);