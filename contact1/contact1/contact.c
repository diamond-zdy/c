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
			printf("���ݳɹ�\n");
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
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	printf("������������\n");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("�������Ա�\n");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("���������䣺\n");
	scanf("%d", &pcon->data[pcon->sz].age);
	printf("������绰��\n");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("������סַ��\n");
	scanf("%s", pcon->data[pcon->sz].addr);
	pcon->sz++;
	printf("¼��ɹ�\n");
}

void DelContact(Contact* pcon)
{
	int i = 0;
	char name[NAME] = { 0 };
	int pos = 0;
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵����֣�");
	scanf("%s", name);
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("Ҫɾ���Ĳ�����\n");
		return;
	}
	for (i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n");
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
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
		printf("ͨѶ¼�ѿգ��޷�����\n");
		return;
	}
	printf("������Ҫ�����˵����֣�");
	scanf("%s", name);
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵĲ�����\n");
		return;
	}
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");

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
		printf("ͨѶ¼�ѿգ��޷��޸�\n");
		return;
	}
	printf("������Ҫ�޸��˵����֣�");
	scanf("%s", name);
	pos = FindByName(pcon, name);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");

	printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name,
		pcon->data[i].age,
		pcon->data[i].sex,
		pcon->data[i].tele,
		pcon->data[i].addr);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵĲ�����\n");
		return;
	}

	for (i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("��������������\n");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("���������Ա�\n");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("�����������䣺\n");
	scanf("%d", &pcon->data[pcon->sz].age);
	printf("�������µ绰��\n");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("��������סַ��\n");
	scanf("%s", pcon->data[pcon->sz].addr);
	pcon->sz++;
	printf("�޸ĳɹ�\n");
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


