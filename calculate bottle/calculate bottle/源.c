#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

#include <stdio.h>
int main()
{
	int money = 20;
	int empty = 0;
	int total = 0;
	scanf("%d", &money);

	total = money * 2 - 1;
	/*total += money;
	empty = money;
	while (empty>=2)
	{
	total += empty / 2;
	empty = empty / 2 + empty % 2;
	}*/
	printf("total=%d\n", total);
	return 0;
}