#include"head.h"
void FindPerson(Addressbooks* abs)
{
	cout << "请输入要查找的联系人姓名" << endl;
	string Name;
	cin >> Name;
	int i = ExistLocation(abs, Name);
	if (i != -1)
	{
		cout << "已找到以下结果" << endl;
		cout << "姓名：" << abs->personArray[i].m_Name << "\t";
		cout << "性别：" << (abs->personArray[i].m_Gender == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[i].m_Age << "\t";
		cout << "电话号：" << abs->personArray[i].m_Phone << "\t";
		cout << "地址：" << abs->personArray[i].m_Addr << endl;
		

	}
	else
	{
		cout << "未查询到联系人" << endl;
	}
	
	system("pause");
	system("cls");
}