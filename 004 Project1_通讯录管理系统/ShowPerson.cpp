#include"head.h"
void ShowPerson(Addressbooks* abs, int len)
{
	if (len > 0)
	{
		for (size_t i = 0; i < len; i++)
		{
			cout << "������" << abs->personArray[i].m_Name <<"\t";
			cout << "�Ա�" << (abs->personArray[i].m_Gender == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age<< "\t";
			cout << "�绰�ţ�" << abs->personArray[i].m_Phone << "\t";
			cout << "��ַ��" << abs->personArray[i].m_Addr<< endl;
			
		}
	}
	else
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	system("pause");
	system("cls");
}




