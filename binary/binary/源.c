#define _CRT_SECURE_NO_WARNINGS 1
//���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7                               �����������
//
#include <stdio.h>//����һ
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
int main()//������
{
	int n;
	int m;
	int count = 0;
	printf("��������������");
	scanf("%d %d", &n, &m);
	int i = m^n;//��������λ�����ͬΪ0����ͬΪ1
	while (i > 0)
	{
		i = i&(i - 1);//��λ��ķ������i���м���1
		count++;
	}
	printf("%d", count);
	return 0;
}