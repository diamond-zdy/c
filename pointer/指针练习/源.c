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

//����str3 �� str4 ָ�����ͬһ�������ַ�����
//C/C++��ѳ����ַ����洢��������һ���ڴ����򣬵�����ָ��ָ��ͬһ���ַ�����ʱ������ʵ�ʻ�ָ��ͬһ���ڴ档
//��������ͬ�ĳ����ַ���ȥ��ʼ����ͬ�������ʱ��ͻῪ�ٳ�������ͬ���ڴ�顣����str1 �� str2��ͬ��str3 �� str4 ��ͬ�� 

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
//&arr��ʾ����ĵ�ַ��
//arrȡ����������Ԫ�صĵ�ַ��