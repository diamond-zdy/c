#define _CRT_SECURE_NO_WARNINGS 1
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�

#include <stdio.h>
int main()
{
	int money = 20;
	int empty = 0;
	int total = 0;
	scanf("%d", &money);

	total = money * 2 - 1;
	/*total += money;
	empty = money;
	while (empty>=2)
	{
	total += empty / 2;
	empty = empty / 2 + empty % 2;
	}*/
	printf("total=%d\n", total);
	return 0;
}