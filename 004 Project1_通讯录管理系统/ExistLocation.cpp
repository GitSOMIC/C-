#include"head.h"

int ExistLocation(Addressbooks * abs,string Name)
{

	for (int i = 0; i < abs->m_Size; i++)
	{
		if(abs->personArray[i].m_Name == Name)
		{
			return i;
		}

	}
	return -1;
}