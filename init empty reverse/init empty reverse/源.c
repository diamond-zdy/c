#define _CRT_SECURE_NO_WARNINGS 1
/*
����һ�����飬
ʵ�ֺ���init������ʼ�����顢
ʵ��empty����������顢
ʵ��reverse���������������Ԫ�ص����á�
Ҫ���Լ���ƺ����Ĳ���������ֵ��*/
#include <stdio.h>
#include <math.h>
void init(int *arr1, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr1[i] = 1;
	}
}//��ʼ��
void empty(int *arr2, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr2[i] = 0;
	}
}//�������
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
}//����Ԫ������
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