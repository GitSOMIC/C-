
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
		case 1:		//�����ϵ��
			addPerson(&abs);
			break;
		case 2:		//��ʾ��ϵ��
			ShowPerson(&abs,abs.m_Size);
			break;
		case 3:		//ɾ����ϵ��
		{
			cout << "������Ҫɾ������ϵ������" << endl;
			string Name;
			cin >> Name;
			DeletPerson(&abs, Name);
			break;
		}
		case 4:		//������ϵ��
			FindPerson(&abs);
			break;
		case 5:		//�޸���ϵ��
			ModifyPerson(&abs);
			break;
		case 6:		//�����ϵ��
			CleanPerson(&abs);
			break;
		case 0:		//�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;

			break;
		default:
			cout << "������ȷѡ��" << endl;
			system("pause");
			system("cls");

			break;
		}

	}
    //system("pause");
    return EXIT_SUCCESS;
}