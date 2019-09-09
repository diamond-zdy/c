#define _CRT_SECURE_NO_WARNINGS 1
//1.递归和非递归分别实现求第n个斐波那契数。
//递归
#include <stdio.h>
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int n = 0;
	printf("请输入一个第n个数:\n");
	scanf("%d", &n);
	printf("第n个数的斐波那契数为：%d\n", fib(n));
	return 0;
}
//非递归
#include <stdio.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	if (n <= 2)
		return 1;
	else
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		return c;
	}
}
int main()
{
	int n = 0;
	printf("请输入一个第n个数:\n");
	scanf("%d", &n);
	printf("第n个数的斐波那契数为：%d\n", fib(n));
	return 0;
}