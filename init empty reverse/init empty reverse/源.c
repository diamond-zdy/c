#define _CRT_SECURE_NO_WARNINGS 1
/*
创建一个数组，
实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值。*/
#include <stdio.h>
#include <math.h>
void init(int *arr1, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr1[i] = 1;
	}
}//初始化
void empty(int *arr2, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr2[i] = 0;
	}
}//清空数组
void reverse(int *arr3, int len)
{
	int tmp = 0;
	int left = 0;
	int right = len - 1;
	while (left<right)
	{
		tmp = arr3[left];
		arr3[left] = arr3[right];
		arr3[right] = tmp;
		left++;
		right--;
	}
}//数组元素逆置
int main()
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int n = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, sz);
	for (n = 0; n < sz; n++)
	{
		printf("%d", arr[n]);
	}
	printf("\n");
	init(arr, sz);
	for (n = 0; n < sz; n++)
	{
		printf("%d", arr[n]);
	}
	printf("\n");
	empty(arr, sz);
	for (n = 0; n < sz; n++)
	{
		printf("%d", arr[n]);
	}
	printf("\n");
	return 0;
}