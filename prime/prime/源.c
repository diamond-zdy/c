#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ���������ж�һ�����ǲ���������
#include <stdio.h>
#include <math.h>
void prime(int b)//��������
{
	int i = 2;
	for (i = 2; i < sqrt(b); i++)
	{
		if (b%i == 0)
		{
			printf("��������");
			break;
		}
	}
	if (i > sqrt(b))
		printf("������");
}
int main()
{
	int a = 0;
	printf("������һ�����֣�");
	scanf("%d", &a);
	prime(a);
	return 0;
}