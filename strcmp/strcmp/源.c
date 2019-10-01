#define _CRT_SECURE_NO_WARNINGS 1

// µœ÷strcmp

#include <stdio.h>
#include <assert.h>
char* my_strchr(char* arr1, char*arr2)
{
	assert(arr1&&arr2);
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')
			return 0;
		arr1++;
		arr2++;
	}
	return *arr1 - *arr2;
}
int main()
{
	char arr1[20] = "abcdefg";
	char arr2[20] = "abcdw";
	int* ret = my_strchr(arr1, arr2);
	printf("%d", ret);
	return 0;
}
