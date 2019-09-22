#define _CRT_SECURE_NO_WARNINGS 1
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

#include <stdio.h>
int main()
{
	int temp = 0;
	int left = 0;
	int i = 0;
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left<right)
	{
		if (arr[left] % 2 != 0)
		{
			left++;
		}
		if (arr[right] % 2 == 0)
		{
			right--;
		}
		else
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}