#define _CRT_SECURE_NO_WARNINGS 1
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//�ݹ�
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
	printf("������һ����n����:\n");
	scanf("%d", &n);
	printf("��n������쳲�������Ϊ��%d\n", fib(n));
	return 0;
}
//�ǵݹ�
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
	printf("������һ����n����:\n");
	scanf("%d", &n);
	printf("��n������쳲�������Ϊ��%d\n", fib(n));
	return 0;
}