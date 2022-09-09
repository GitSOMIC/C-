#include"head.h"

void ModifyPerson(Addressbooks* abs)
{
	
	cout << "请输入您要修改的联系人的姓名" << endl;
	string Name;
	cin >> Name;
	int i = ExistLocation(abs, Name);
	if (i != -1)
	{
		char choose = 'y';

		//----------------------------------
		cout << "当前姓名：" << abs->personArray[i].m_Name << endl;
		cout << "是否修改（y/n）" << endl;
		cin >> choose;
		if (choose == 'y')
		{
			cout << "请输入新姓名" << endl;
			cin >> abs->personArray[i].m_Name;
		}

		//----------------------------------
		cout << "当前性别：" << (abs->personArray[i].m_Gender == 1 ? "男" : "女") << endl;
		cout << "是否修改（y/n）" << endl;
		cin >> choose;
		if (choose == 'y')
		{
			while (true)
			{

				cout << "请输入新性别（1男2女）" << endl;
				int sex = 0;
				cin >> sex;
				if (sex==1||sex==2)
				{
					abs->personArray[i].m_Gender = sex;
					break;
				}
				cout << "输入错误" << endl;
			}
			
		}

		//----------------------------------
		cout << "当前年龄：" << abs->personArray[i].m_Age << endl;
		cout << "是否修改（y/n）" << endl;
		cin >> choose;
		if (choose == 'y')
		{
			
			while (true)
			{
				cout << "请输入新年龄" << endl;
				int age = -1;
				cin >> age;
				if (age >= 0 && age <= 200)
				{
					abs->personArray[i].m_Age = age;
					break;
				}
				cout << "年龄范围 0 ~ 200" << endl;

			}
			
		}


		//----------------------------------

		cout << "当前电话号：" << abs->personArray[i].m_Phone << endl;
		cout << "是否修改（y/n）" << endl;
		cin >> choose;
		if (choose == 'y')
		{

			while (true)
			{

				cout << "请输入11位电话号" << endl;

				string Phone = "11111111111";
				cin >> Phone;

				if (Phone.length() == 11)
				{
					abs->personArray[i].m_Phone = Phone;
					break;
				}
				cout << "请输入长度为11位的电话号码" << endl;
			}


		}

		cout << "当前地址：" << abs->personArray[i].m_Addr << endl;

		cout << "是否修改（y/n）" << endl;
		cin >> choose;
		if (choose == 'y')
		{
			cout << "请输入新地址" << endl;
			cin >> abs->personArray[i].m_Addr;
		}

		cout << "修改完成" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "查无此人" << endl;
	system("pause");
	system("cls");
}