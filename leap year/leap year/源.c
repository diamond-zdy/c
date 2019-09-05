#define _CRT_SECURE_NO_WARNINGS 1
//实现一个函数判断year是不是润年。
#include <stdio.h>
void leap_year(int i)//创建函数
{
	if (i % 4 == 0 && i % 100 == !0 || i % 400 == 0)
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
}
int main()
{
	int a = 0;
	printf("请输入年份： ");
	scanf("%d", &a);
	leap_year(a);
	return 0;
}
