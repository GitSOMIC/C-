#include"head.h"
void DeletPerson(Addressbooks* abs,string Name)
{
	int location = ExistLocation(abs, Name);  // 不用&abs
	if (location != -1)
	{
		for (int i = location; i < abs->m_Size ;i++)
		{
			abs->personArray[i] = abs->personArray[i+1];
		}
		cout << "删除完成" << endl;
		abs->m_Size--;
	}
	else
	{
		cout << "查无此人" << endl;
		
		
	}
	system("pause");
	system("cls");
}