#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
int count_one_bits(unsigned int value)
{
	// 返回 1的位数 
}
#include <stdio.h>
int count_one_bits(unsigned int n)
{
	int count = 0;
	while (n / 2 != 0)//法1
	{
		if (n % 2 == 1)
		{
			count++;
			n = n / 2;
		}
	}
	return count;
}
法2
int i = 0;
for (i = 0; i < 32; i++)
{
	if ((n >> 1) & 1 == 1)
		count++;
}
法3
while (n)
{
	n = n&(n - 1);
	count++;
}
int main()
{
	int n = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	int ret = count_one_bits(n);
	printf("%d", ret);
}