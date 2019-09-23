#define _CRT_SECURE_NO_WARNINGS 1
//杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
//由于每一行都是从左到右升序排列数字
//所以只需要判断出要查找的数字是否大于每一行的第一个数，如果大于或等于则查找，否则跳到下一行判断
#include<stdio.h>
#include<stdlib.h>
#define row 3
#define col 3
int yang_matrix(int a[3][3]) {
	int number = 0;
	int i = 0, j = 0;
	printf("请输入一个整数:\n");
	scanf("%d", &number);
	for (i; i < row; i++) {
		if (number < a[i][j])
		{
			continue;
		}
		if (number == a[i][j])
		{
			return a[i][j];
		}
		for (j; j < col; j++)
		{
			if (number < a[i][j])
			{
				continue;
			}
			if (number == a[i][j])
			{
				return a[i][j];
			}
		}
		j = 0;
	}
	return 0;
}
int main()
{
	int arr[3][3] = { { 1, 3, 5 }, { 4, 7, 8 }, { 9, 10, 11 } };
	int number1 = yang_matrix(arr);
	if (number1 == 0)
	{
		printf("不包含\n");
	}
	else
	{
		printf("包含\n");
	}

	return 0;
}
