#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
int CheckCapacity(Contact* pcon)
{
	assert(pcon != NULL);
	if (pcon->sz == pcon->capacity)
	{
		PeoInfo* tmp = (PeoInfo*)realloc(pcon->data, (pcon->capacity + 2)*sizeof(PeoInfo));
		if (tmp != NULL)
		{
			pcon->data = tmp;
			pcon->capacity += 2;
			printf("增容成功\n");
			return 1;
		}
		else
		{
			printf("%s\n", strerror(errno));
			return 0;
		}
	}
	else
	{
		return 1;
	}
}

void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	pcon->data = (PeoInfo*)malloc(DEFAULT_SZ*sizeof(PeoInfo));
	if (pcon->data == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	memset(pcon->data, 0, sizeof(pcon->data));
}

void AddContact(Contact* pcon)
{
	assert(pcon);
	if (pcon->sz == MAX)
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
	printf("请输入姓名：\n");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("请输入性别：\n");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("请输入年龄：\n");
	scanf("%d", &pcon->data[pcon->sz].age);
	printf("请输入电话：\n");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("请输入住址：\n");
	scanf("%s", pcon->data[pcon->sz].addr);
	pcon->sz++;
	printf("录入成功\n");
}

void DelContact(Contact* pcon)
{
	int i = 0;
	char name[NAME] = { 0 };
	int pos = 0;
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("通讯录已空，无法删除\n");
		return;
	}
	printf("请输入要删除人的名字：");
	scanf("%s", name);
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("要删除的不存在\n");
		return;
	}
	for (i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("删除成功\n");
}

static int FindByName(Contact* pcon, char name[])
{
	int i = 0;
	assert(pcon);
	for (i = 0; i < pcon->sz; i++)
	{
		if (0 == strcmp(pcon->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "姓名", "年龄", "性别", "电话", "住址");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}

void SearchContact(const Contact* pcon)
{
	int i = 0;
	char name[NAME] = { 0 };
	int pos = 0;
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("通讯录已空，无法查找\n");
		return;
	}
	printf("请输入要查找人的名字：");
	scanf("%s", name);
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("要查找的不存在\n");
		return;
	}
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "姓名", "年龄", "性别", "电话", "住址");

	printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name,
		pcon->data[i].age,
		pcon->data[i].sex,
		pcon->data[i].tele,
		pcon->data[i].addr);
}

void ModifyContact(Contact *pcon)
{
	int i = 0;
	char name[NAME] = { 0 };
	int pos = 0;
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("通讯录已空，无法修改\n");
		return;
	}
	printf("请输入要修改人的名字：");
	scanf("%s", name);
	pos = FindByName(pcon, name);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "姓名", "年龄", "性别", "电话", "住址");

	printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name,
		pcon->data[i].age,
		pcon->data[i].sex,
		pcon->data[i].tele,
		pcon->data[i].addr);
	if (pos == -1)
	{
		printf("要修改的不存在\n");
		return;
	}

	for (i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("请输入新姓名：\n");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("请输入新性别：\n");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("请输入新年龄：\n");
	scanf("%d", &pcon->data[pcon->sz].age);
	printf("请输入新电话：\n");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("请输入新住址：\n");
	scanf("%s", pcon->data[pcon->sz].addr);
	pcon->sz++;
	printf("修改成功\n");
}
void SortContact(Contact* pcon)
{
	int i = 0;
	assert(pcon);
	for (i = 0; i < pcon->sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < pcon->sz - i - 1; j++)
		{
			if (strcmp(pcon->data[j].name, pcon->data[j + 1].name)>0)
			{
				PeoInfo tmp = pcon->data[j];
				pcon->data[j] = pcon->data[j + 1];
				pcon->data[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
void DestoryContact(Contact* pcon)
{
	assert(pcon != NULL);
	free(pcon->data);
	pcon->data = NULL;
	pcon->sz = 0;
	pcon->capacity = 0;
}


