#define _CRT_SECURE_NO_WARNINGS 1
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
int count_one_bits(unsigned int value)
{
	// ���� 1��λ�� 
}
#include <stdio.h>
int count_one_bits(unsigned int n)
{
	int count = 0;
	while (n / 2 != 0)//��1
	{
		if (n % 2 == 1)
		{
			count++;
			n = n / 2;
		}
	}
	return count;
}
��2
int i = 0;
for (i = 0; i < 32; i++)
{
	if ((n >> 1) & 1 == 1)
		count++;
}
��3
while (n)
{
	n = n&(n - 1);
	count++;
}
int main()
{
	int n = 0;
	printf("������һ������");
	scanf("%d", &n);
	int ret = count_one_bits(n);
	printf("%d", ret);
}