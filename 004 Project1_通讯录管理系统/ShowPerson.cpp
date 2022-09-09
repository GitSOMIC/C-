#include"head.h"
void ShowPerson(Addressbooks* abs, int len)
{
	if (len > 0)
	{
		for (size_t i = 0; i < len; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name <<"\t";
			cout << "性别：" << (abs->personArray[i].m_Gender == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age<< "\t";
			cout << "电话号：" << abs->personArray[i].m_Phone << "\t";
			cout << "地址：" << abs->personArray[i].m_Addr<< endl;
			
		}
	}
	else
	{
		cout << "通讯录为空" << endl;
	}
	system("pause");
	system("cls");
}




