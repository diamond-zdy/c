#define _CRT_SECURE_NO_WARNINGS 1
//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
#include <stdio.h>
#include <string.h>
int compare(char*arr, char*arr2, int sz, int sz2)
{
	int  k = sz - 1;
	if (sz != sz2)
	{
		return 0;
	}
	while (k--)
	{
		char tmp = arr[0];
		int j = 0;
		for (j = 0; j < k; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[j] = tmp;
		if (strcmp(arr, arr2) == 0)
		{
			return 1;
		}
	}
	return 0;

}
int main()
{
	int ret = 0;
	char arr[] = "AABCD";
	char arr2[] = "BCDAA";
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);

	ret = compare(arr, arr2, sz, sz2);
	if (ret == 0)
	{
		printf("������ת����ַ�");
	}
	else if (ret == 1)
	{
		printf("����ת����ַ�");
	}
}