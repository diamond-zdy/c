#define _CRT_SECURE_NO_WARNINGS 1
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

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