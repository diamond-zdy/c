#define _CRT_SECURE_NO_WARNINGS 1
//ÊµÏÖstrstr
#include <stdio.h>
#include <assert.h>
char* my_strstr(const char*arr1, const char*arr2)
{
	const char*p1 = arr1;
	const char*p2 = arr2;
	const char*start = p1;
	while (*start)
	{
		p1 = start;
		p2 = arr2;
		while (*p1&&*p2&&*p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return start;
		}
		start++;
		p2 = arr2;
	}
	return NULL;
}
int main()
{
	char arr1[20] = "abcdefg";
	char arr2[20] = "def";
	char* ret = my_strstr(arr1, arr2);
	printf("%s", ret);
	return 0;
}