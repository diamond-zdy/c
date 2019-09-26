#define _CRT_SECURE_NO_WARNINGS 1
//Ä£ÄâÊµÏÖstrcpy

#include <stdio.h>
char my_strcpy(char*arr, char*arr2, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = arr2[i];
	}
	return 0;
}
int main()
{
	char arr[20] = { 0 };
	char arr2[] = "hehe";
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	printf("%d\n", sz);
	my_strcpy(arr, arr2, sz);
	printf("%s", arr);
	return 0;
}