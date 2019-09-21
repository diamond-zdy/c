#define _CRT_SECURE_NO_WARNINGS 1
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
#include <stdio.h>
#include <Windows.h>
int main()
{
	int arr[9] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	for (i = 1; i < sz; ++i)
	{
		arr[0] = arr[0] ^ arr[i];
	}
	printf("%d\n", arr[0]);

}