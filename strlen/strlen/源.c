#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen 
//�ǵݹ�
#include <stdio.h>
#include <string.h>
#include <math.h>
int Strlen(char *str)
{
	int ret = 0;
	if (*str == '\0')
		return 0;
	while (*str != 0)
	{
		ret++;
		str++;
	}
	return ret;
}
int main()
{
	char *str = "abcdef";
	printf("%d", Strlen(str));
	return 0;
}

//�ݹ�
int Strlen(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return Strlen(str + 1) + 1;
}
int main()
{
	char *str = "abcdef";
	printf("%d", Strlen(str));
	return 0;
}