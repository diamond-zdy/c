#define _CRT_SECURE_NO_WARNINGS 1
//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
#include <stdio.h>
int main()
{
	int a = 2;
	int b = 3;
	int ret = (a & b) + ((a ^ b) >> 1);//a&b�൱����ͬһ��biteλ����ͬ��ƽ��ֵ��a^b�൱��ͬһ��biteλ����ͬ����֮�ͣ�>>1�൱��/2
	printf("%d", ret);
	return 0;
}