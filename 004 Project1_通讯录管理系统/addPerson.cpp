#include"head.h"
void addPerson(Addressbooks* abs)
{
	if (abs->m_Size < MAX)
	{

		//��������
		// 
		//(abs->m_Size)++;   //+++++++++++++++++++++++
		cout << "����������" << endl;
		//string name;
		//cin >> name;
		//abs->personArray[abs->m_Size].m_Name = name;
		cin >> abs->personArray[abs->m_Size].m_Name;


		//�Ա�����
		//
		while (true)
		{
			cout << "�������Ա�" << endl;
			cout << "1-��" << endl;
			cout << "2-Ů" << endl;

			int Gender = 0;
			cin >> Gender;
			if (Gender ==1 || Gender == 2)
			{
				abs->personArray[abs->m_Size].m_Gender = Gender;
				break;
			}
			cout << "���������������" << endl;
			//cin.clear();//�������״̬
			//cin.ignore();//���Ե����뻺����������
			
		}

		//��������
		while (true)
		{
			cout << "����������" << endl;
			int age = -1;
			cin >> age;
			if (age>=0 && age<=200)
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "���䷶Χ 0 ~ 200" << endl;

		}

		//�绰����
		while (true)
		{

			cout << "������11λ�绰��" << endl;
		
			string Phone = "11111111111";
			cin >> Phone;
			
			if (Phone.length() == 11)
			{
				abs->personArray[abs->m_Size].m_Phone = Phone;
				break;
			}
			cout << "�����볤��Ϊ11λ�ĵ绰����" << endl;
		}
		//��ַ����
		cout << "�������ַ" << endl;
		cin >> abs->personArray[abs->m_Size].m_Addr;
		//
		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��Ա�����ɣ���лʹ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
}