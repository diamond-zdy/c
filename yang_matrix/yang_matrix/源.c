#define _CRT_SECURE_NO_WARNINGS 1
//���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
//����ÿһ�ж��Ǵ�����������������
//����ֻ��Ҫ�жϳ�Ҫ���ҵ������Ƿ����ÿһ�еĵ�һ������������ڻ��������ң�����������һ���ж�
#include<stdio.h>
#include<stdlib.h>
#define row 3
#define col 3
int yang_matrix(int a[3][3]) {
	int number = 0;
	int i = 0, j = 0;
	printf("������һ������:\n");
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
		printf("������\n");
	}
	else
	{
		printf("����\n");
	}

	return 0;
}
