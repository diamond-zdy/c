#define _CRT_SECURE_NO_WARNINGS 1
// µœ÷strchr
#include <stdio.h>
#include <assert.h>
char* my_strchr(char*arr1, const char*arr2)
{
	while (*arr1&&*arr1 != *arr2)
		*arr1++;
	if (*arr1 == *arr2)
	{
		return arr1;
	}
	return NULL;
}
int main()
{
	char arr1[20] = "abcdefg";
	char arr2[20] = "d";
	char* ret = my_strchr(arr1, arr2);
	printf("%s", ret);
	return 0;
}
