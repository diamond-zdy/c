#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello world.";
//	char str2[] = "hello world.";
//	char *str3 = "hello world.";
//	char *str4 = "hello world.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//这里str3 和 str4 指向的是同一个常量字符串。
//C/C++会把常量字符串存储到单独的一个内存区域，当几个指针指向同一个字符串的时候，他们实际会指向同一块内存。
//但是用相同的常量字符串去初始化不同的数组的时候就会开辟出两个不同的内存块。所以str1 和 str2不同，str3 和 str4 不同。 

#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);

	printf("%p\n", arr+1);
	printf("%p\n", &arr+1);
	return 0;
}
//&arr表示数组的地址；
//arr取得是数组首元素的地址；