#define _CRT_SECURE_NO_WARNINGS 1
//实现一个函数，判断一个数是不是素数。
#include <stdio.h>
#include <math.h>
void prime(int b)//创建函数
{
	int i = 2;
	for (i = 2; i < sqrt(b); i++)
	{
		if (b%i == 0)
		{
			printf("不是素数");
			break;
		}
	}
	if (i > sqrt(b))
		printf("是素数");
}
int main()
{
	int a = 0;
	printf("请输入一个数字：");
	scanf("%d", &a);
	prime(a);
	return 0;
}