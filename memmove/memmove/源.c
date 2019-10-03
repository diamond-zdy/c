#define _CRT_SECURE_NO_WARNINGS 1
//7. µœ÷memmove
#include <stdio.h>
#include <assert.h>
void *my_memmove(void *dest, void *src, size_t count)
{
	void *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest <= src || (char *)dest >= ((char*)src + count))
	//if (dest>src)
	{
		while (count)
		{
			*(char*)dest = *(char *)src;
			dest = (char *)dest + 1;
			src = (char *)src + 1;
			count--;
		}
	}
	else
	{
		dest = (char *)dest + count - 1;
		src = (char *)src + count - 1;
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
			dest = (char *)dest - 1;
			src = (char *)src - 1;
		}
	}
	return ret;
}
int main()
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	my_memmove(arr1 + 2, arr1, 16);
	for (int i = 0; i<6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	int arr2[6] = { 1, 2, 3, 4, 5, 6 };
	my_memmove(arr2, arr2 + 2, 16);
	for (int i = 0; i<6; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}