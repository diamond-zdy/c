#define _CRT_SECURE_NO_WARNINGS 1
//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
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
		printf("不是旋转后的字符");
	}
	else if (ret == 1)
	{
		printf("是旋转后的字符");
	}
}