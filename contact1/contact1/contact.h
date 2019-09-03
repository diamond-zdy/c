#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1000
#define NAME 20
#define SEX 5
#define TELE 12
#define ADDR 25
#define DEFAULT_SZ 2

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

typedef struct PeoInfo
{
	char name[NAME];
	char sex[SEX];
	short age;
	char tele[TELE];
	char addr[ADDR];
}PeoInfo;

typedef struct Contact
{
	struct PeoInfo* data;
	int sz;//��¼��ǰ�ж����˵���Ϣ
	int capacity;//��ǰͨѶ¼���������
}Contact;

void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void DelContact(Contact* pcon);
void ShowContact(const Contact* pcon);
int FindByName(Contact* pcon, char name[]);
void ModifyContact(Contact *pcon);
void SearchContact(const Contact* pcon);
void SortContact(Contact* pcon);
int CheckCapacity(Contact* pcon);
void DestoryContact(Contact* pcon);





