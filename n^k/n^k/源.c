#define _CRT_SECURE_NO_WARNINGS 1

//编写一个函数实现n^k，使用递归实现
#include <stdio.h>
int My_Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k == 1)
	{
		return n;
	}
	else
	{
		return n*My_Pow(n, k - 1);
	}
}
int main()
{
	int n = 2;
	int k = 5;
	int c = My_Pow(n, k);
	printf("%d^%d=%d", n, k, c);
	return 0;
}