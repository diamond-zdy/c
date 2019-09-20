#define _CRT_SECURE_NO_WARNINGS 1
//不使用（a + b） / 2这种方式，求两个数的平均值。
#include <stdio.h>
int main()
{
	int a = 2;
	int b = 3;
	int ret = (a & b) + ((a ^ b) >> 1);//a&b相当于求同一个bite位的相同的平均值，a^b相当于同一个bite位不相同的数之和，>>1相当于/2
	printf("%d", ret);
	return 0;
}