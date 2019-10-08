#define _CRT_SECURE_NO_WARNINGS 1
//strncatÄ£ÄâÊµÏÖ
#include <stdio.h>
#include <assert.h>
char *my_strncat(char* dest, const char* src, int n)
{

	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest)
	{
		*dest++;
	}
	while (n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return ret;
}
int main()
{

	char arr1[20] = "abcde";
	char arr2[] = "sdf";
	my_strncat(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}

