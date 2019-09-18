#define _CRT_SECURE_NO_WARNINGS 1

//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int arr[20][20] = { 0 };
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{

		for (j = 0; j <= i; j++)
		{
			if (i == 0)
			{
				printf("%4d ", arr[1][1] = 1);
			}
			else if ((j == 0) || (i == j))
			{
				printf("%4d ", arr[i][j] = 1);
			}
			else
			{
				printf("%4d", arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]);
			}

		}
		printf("\n");
	}
	return 0;

}