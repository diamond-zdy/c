#define _CRT_SECURE_NO_WARNINGS 1
��д������
unsigned int reverse_bit(unsigned int value);
��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��

�磺
��32λ������25���ֵ�������и�λ��
00000000000000000000000000011001
��ת�󣺣�2550136832��
10011000000000000000000000000000
���������أ�
2550136832

#include <stdio.h>
int reverse_bit(unsigned int value)
{
	int ret = 0;
	int bit = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		ret = ret << 1;//����һλ�������һλ
		bit = value & 1;//ȡ�����λ
		value = value >> 1;//����һλ��ȡ��һλ
		ret = bit | ret;//���һλ����ret
	}
	return ret;
}
int main()
{
	printf("%u\n", reverse_bit(25));
	return 0;
}