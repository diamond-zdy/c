#define _CRT_SECURE_NO_WARNINGS 1
//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列
#include <stdio.h>


int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int m = 0;
	int k = 0;
	int arr[32] = { 0 };
	printf("请输入一个数：");
	scanf("%d", &n);

	while (n / 2 != 0)
	{

		arr[31 - i] = (n % 2);
		i++;
		n = n / 2;
	}
	if (n == 1)

	{
		arr[31 - i] = 1;
	}

	for (m = 0; m <32; m++)
	{
		printf("%d", arr[m]);
	}
	printf("\n");
	for (k = 0; k < 32; k += 2)
	{
		printf("%d", arr[k]);
	}
	printf("\n");

	for (j = 1; j < 32; j += 2)
	{
		printf("%d", arr[j]);
	}
	printf("\n");

}