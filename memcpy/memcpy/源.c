#define _CRT_SECURE_NO_WARNINGS 1

// µœ÷memcpy
#include <stdio.h>
void *my_memcpy(void* arr1, const void*arr2, size_t count)
{
	void*ret = arr1;
	while (count--)
	{
		*(char*)arr1 = *(char*)arr2;
		arr1 = (char *)arr1 + 1;
		arr2 = (char *)arr2 + 1;
	}
	return ret;
}
int main()
{
	char arr1[20] = "abcdefg";
	char arr2[20] = "aaa";
	int count = 3;
	char* ret = my_memcpy(arr1, arr2, count);
	printf("%s", ret);
	return 0;
}