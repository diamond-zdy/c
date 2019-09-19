#define _CRT_SECURE_NO_WARNINGS 1
编写函数：
unsigned int reverse_bit(unsigned int value);
这个函数的返回值value的二进制位模式从左到右翻转后的值。

如：
在32位机器上25这个值包含下列各位：
00000000000000000000000000011001
翻转后：（2550136832）
10011000000000000000000000000000
程序结果返回：
2550136832

#include <stdio.h>
int reverse_bit(unsigned int value)
{
	int ret = 0;
	int bit = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		ret = ret << 1;//左移一位，保存第一位
		bit = value & 1;//取出最低位
		value = value >> 1;//右移一位，取下一位
		ret = bit | ret;//最后一位赋给ret
	}
	return ret;
}
int main()
{
	printf("%u\n", reverse_bit(25));
	return 0;
}