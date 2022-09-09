
#include"head.h"

int main()
{

	Addressbooks abs;
	abs.m_Size = 0;

	while (true)
	{

		ShowMenu();
		int select = 0;
		cin >> select;
		

		switch (select)
		{
		case 1:		//添加联系人
			addPerson(&abs);
			break;
		case 2:		//显示联系人
			ShowPerson(&abs,abs.m_Size);
			break;
		case 3:		//删除联系人
		{
			cout << "请输入要删除的联系人姓名" << endl;
			string Name;
			cin >> Name;
			DeletPerson(&abs, Name);
			break;
		}
		case 4:		//查找联系人
			FindPerson(&abs);
			break;
		case 5:		//修改联系人
			ModifyPerson(&abs);
			break;
		case 6:		//清空联系人
			CleanPerson(&abs);
			break;
		case 0:		//退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;

			break;
		default:
			cout << "输入正确选项" << endl;
			system("pause");
			system("cls");

			break;
		}

	}
    //system("pause");
    return EXIT_SUCCESS;
}