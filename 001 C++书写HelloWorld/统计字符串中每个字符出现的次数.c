#include<stdio.h>


int main()
{
	char str[11] = { 0 };  // helloworld  26个英文字母  a：97

// scanf("%s", str)
	for (size_t i = 0; i < 10; i++)
	{
		scanf_s("%c", &str[i]);
	}

	int count[26] = { 0 };     //代表26个英文字母出现的次数  ‘b’ -‘a’= 1 ==》  下标1的数组++1

	for (size_t i = 0; i < 10; i++)
	{
		int index = str[i] - 'a';
		count[index]++;
	}

	for (size_t i = 0; i < 26; i++)
	{
		if (count[i] != 0)
		{
			printf("%c出现的次数为%d\n", i + 'a', count[i]);
		}
	}

}









