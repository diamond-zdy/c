#define _CRT_SECURE_NO_WARNINGS 1
//编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7                               （可以用异或）
//
#include <stdio.h>//方法一
int Binary(int a, int *arr)
{
		   int i = 0;
		   while (a / 2 != 0)
		   {
			   arr[i] = a % 2;
			   i++;
			   a = a / 2;
		   }
		   if (a == 1)
		   {
			   arr[i] = 1;
		   }
	   }
int Compare(int *arr1, int *arr2)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (arr1[i] != arr2[i])
		{
			count++;
		}
	}
	return count;
}
int main()
{

	int i = 0;
	int j = 0;
	int ret = 0;
	int arr1[32] = { 0 };
	int arr2[32] = { 0 };
	scanf("%d%d", &i, &j);
	Binary(i, arr1);
	Binary(j, arr2);
	ret = Compare(arr1, arr2);
	printf("%d", ret);
	return 0;
}
int main()//方法二
{
	int n;
	int m;
	int count = 0;
	printf("请输入两个数：");
	scanf("%d %d", &n, &m);
	int i = m^n;//两个数按位异或，相同为0，不同为1
	while (i > 0)
	{
		i = i&(i - 1);//按位与的方法求出i中有几个1
		count++;
	}
	printf("%d", count);
	return 0;
}