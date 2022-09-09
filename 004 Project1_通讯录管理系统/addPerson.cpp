#include"head.h"
void addPerson(Addressbooks* abs)
{
	if (abs->m_Size < MAX)
	{

		//姓名输入
		// 
		//(abs->m_Size)++;   //+++++++++++++++++++++++
		cout << "请输入姓名" << endl;
		//string name;
		//cin >> name;
		//abs->personArray[abs->m_Size].m_Name = name;
		cin >> abs->personArray[abs->m_Size].m_Name;


		//性别输入
		//
		while (true)
		{
			cout << "请输入性别" << endl;
			cout << "1-男" << endl;
			cout << "2-女" << endl;

			int Gender = 0;
			cin >> Gender;
			if (Gender ==1 || Gender == 2)
			{
				abs->personArray[abs->m_Size].m_Gender = Gender;
				break;
			}
			cout << "输入错误重新输入" << endl;
			//cin.clear();//清楚错误状态
			//cin.ignore();//忽略掉输入缓冲区的数据
			
		}

		//年龄输入
		while (true)
		{
			cout << "请输入年龄" << endl;
			int age = -1;
			cin >> age;
			if (age>=0 && age<=200)
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "年龄范围 0 ~ 200" << endl;

		}

		//电话输入
		while (true)
		{

			cout << "请输入11位电话号" << endl;
		
			string Phone = "11111111111";
			cin >> Phone;
			
			if (Phone.length() == 11)
			{
				abs->personArray[abs->m_Size].m_Phone = Phone;
				break;
			}
			cout << "请输入长度为11位的电话号码" << endl;
		}
		//地址输入
		cout << "请输入地址" << endl;
		cin >> abs->personArray[abs->m_Size].m_Addr;
		//
		//更新通讯录人数
		abs->m_Size++;

		cout << "人员添加完成，感谢使用" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
}