#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ�������ж�year�ǲ������ꡣ
#include <stdio.h>
void leap_year(int i)//��������
{
	if (i % 4 == 0 && i % 100 == !0 || i % 400 == 0)
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
}
int main()
{
	int a = 0;
	printf("��������ݣ� ");
	scanf("%d", &a);
	leap_year(a);
	return 0;
}
