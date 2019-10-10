#define _CRT_SECURE_NO_WARNINGS 1
//strncmpÄ£ÄâÊµÏÖ
#include <stdio.h>
#include <assert.h>
int my_strncmp(char* arr1, char* arr2, int n)
{
	int ret = 0;
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	while (*arr1 && (*arr2) && n--)
	{
		if (arr1 == arr2)
		{
			arr1++;
			arr2++;
		}
		else
			break;
	}
	if (*arr1 == *arr2)
		return 0;
	else if (*arr1 > *arr2)
		return 1;
	else
		return -1;
}
int main()
{
	char arr1[20] = "abcde";
	char arr2[] = "sdfg";
	int ret = my_strncmp(arr1, arr2, 2);
	printf("%d", ret);
	return 0;
}