#include"head.h"

void ModifyPerson(Addressbooks* abs)
{
	
	cout << "��������Ҫ�޸ĵ���ϵ�˵�����" << endl;
	string Name;
	cin >> Name;
	int i = ExistLocation(abs, Name);
	if (i != -1)
	{
		char choose = 'y';

		//----------------------------------
		cout << "��ǰ������" << abs->personArray[i].m_Name << endl;
		cout << "�Ƿ��޸ģ�y/n��" << endl;
		cin >> choose;
		if (choose == 'y')
		{
			cout << "������������" << endl;
			cin >> abs->personArray[i].m_Name;
		}

		//----------------------------------
		cout << "��ǰ�Ա�" << (abs->personArray[i].m_Gender == 1 ? "��" : "Ů") << endl;
		cout << "�Ƿ��޸ģ�y/n��" << endl;
		cin >> choose;
		if (choose == 'y')
		{
			while (true)
			{

				cout << "���������Ա�1��2Ů��" << endl;
				int sex = 0;
				cin >> sex;
				if (sex==1||sex==2)
				{
					abs->personArray[i].m_Gender = sex;
					break;
				}
				cout << "�������" << endl;
			}
			
		}

		//----------------------------------
		cout << "��ǰ���䣺" << abs->personArray[i].m_Age << endl;
		cout << "�Ƿ��޸ģ�y/n��" << endl;
		cin >> choose;
		if (choose == 'y')
		{
			
			while (true)
			{
				cout << "������������" << endl;
				int age = -1;
				cin >> age;
				if (age >= 0 && age <= 200)
				{
					abs->personArray[i].m_Age = age;
					break;
				}
				cout << "���䷶Χ 0 ~ 200" << endl;

			}
			
		}


		//----------------------------------

		cout << "��ǰ�绰�ţ�" << abs->personArray[i].m_Phone << endl;
		cout << "�Ƿ��޸ģ�y/n��" << endl;
		cin >> choose;
		if (choose == 'y')
		{

			while (true)
			{

				cout << "������11λ�绰��" << endl;

				string Phone = "11111111111";
				cin >> Phone;

				if (Phone.length() == 11)
				{
					abs->personArray[i].m_Phone = Phone;
					break;
				}
				cout << "�����볤��Ϊ11λ�ĵ绰����" << endl;
			}


		}

		cout << "��ǰ��ַ��" << abs->personArray[i].m_Addr << endl;

		cout << "�Ƿ��޸ģ�y/n��" << endl;
		cin >> choose;
		if (choose == 'y')
		{
			cout << "�������µ�ַ" << endl;
			cin >> abs->personArray[i].m_Addr;
		}

		cout << "�޸����" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "���޴���" << endl;
	system("pause");
	system("cls");
}