#define _CRT_SECURE_NO_WARNINGS 1
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#include <stdio.h>
int DigitSum(int n)
{
	if (n <= 9)
		return n;
	else
		return  DigitSum(n / 10) + n % 10;
}


int main()
{
	int a = 0;
	printf("������һ���Ǹ�����:");
	scanf("%d", &a);
	printf("�����������֮��Ϊ��%d", DigitSum(a));
	return 0;
}