#include<stdio.h>


int main()
{
	char str[11] = { 0 };  // helloworld  26��Ӣ����ĸ  a��97

// scanf("%s", str)
	for (size_t i = 0; i < 10; i++)
	{
		scanf_s("%c", &str[i]);
	}

	int count[26] = { 0 };     //����26��Ӣ����ĸ���ֵĴ���  ��b�� -��a��= 1 ==��  �±�1������++1

	for (size_t i = 0; i < 10; i++)
	{
		int index = str[i] - 'a';
		count[index]++;
	}

	for (size_t i = 0; i < 26; i++)
	{
		if (count[i] != 0)
		{
			printf("%c���ֵĴ���Ϊ%d\n", i + 'a', count[i]);
		}
	}

}









