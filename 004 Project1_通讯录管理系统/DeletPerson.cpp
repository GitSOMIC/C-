#include"head.h"
void DeletPerson(Addressbooks* abs,string Name)
{
	int location = ExistLocation(abs, Name);  // ����&abs
	if (location != -1)
	{
		for (int i = location; i < abs->m_Size ;i++)
		{
			abs->personArray[i] = abs->personArray[i+1];
		}
		cout << "ɾ�����" << endl;
		abs->m_Size--;
	}
	else
	{
		cout << "���޴���" << endl;
		
		
	}
	system("pause");
	system("cls");
}