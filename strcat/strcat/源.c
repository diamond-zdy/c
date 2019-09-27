#define _CRT_SECURE_NO_WARNINGS 1
//Ä£ÄâÊµÏÖstrcat

#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return dest;
}
int main()
{
	char a[100] = "abc";
	char b[100] = "def";
	my_strcat(a, b);
	printf("%s", a);
	return 0;
}