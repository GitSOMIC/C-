#include"head.h"
void FindPerson(Addressbooks* abs)
{
	cout << "������Ҫ���ҵ���ϵ������" << endl;
	string Name;
	cin >> Name;
	int i = ExistLocation(abs, Name);
	if (i != -1)
	{
		cout << "���ҵ����½��" << endl;
		cout << "������" << abs->personArray[i].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[i].m_Gender == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[i].m_Age << "\t";
		cout << "�绰�ţ�" << abs->personArray[i].m_Phone << "\t";
		cout << "��ַ��" << abs->personArray[i].m_Addr << endl;
		

	}
	else
	{
		cout << "δ��ѯ����ϵ��" << endl;
	}
	
	system("pause");
	system("cls");
}