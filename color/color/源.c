#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
  // *******     *******                          
  //**     **  **      **
  //**      ****       **
  //**                 **
  // **               **
  //  **             **
	 //**           **
	 //  **        **
	 //   **      **
		// **    **
		//  **  **
		//   ****

//enum Color
//{
//	   black, blue, green, lakeBlue, red, purple, yellow, white, gray,
//	   lightBlue, lightGreen, lightSimpleGreen, lightRed, lightPurple, lightYellow, brightWhite
//};

//void setColor(unsigned short backColor = 0, unsigned short textColor = 7)
//{
//	   char command[9] = "color 07";		//Ĭ����ɫ	
//	   command[6] = '0' + backColor;		//��backColor������Ϊ�ַ��� 
//	   command[7] = '0' + textColor;		//��textColor������Ϊ�ַ��� 
//	   system(command);				//����ϵͳ���� 
//
//}
//int main()
//{
//	int left = 0;
//	int right = 0;
//	char arr1[][] = { "                                            " };
//	char arr2[5][] = { "	*******     *******" };
//	int i = 0;
//	int len = strlen(arr2);
//	left = 0;
//	right = len - 1;
//	while (left <= right){
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		Sleep(1000);//ֹͣ����1����
//		system("cls");//��ӡ�������
//		left++;
//		right--;
//
//	}
//	setColor(white, red);
//	printf("%s", arr2);
//	system("pause");
//
//	return 0;
//}

//enum Color
//{
//	black, blue, green, lakeBlue, red, purple, yellow, white, gray,
//	lightBlue, lightGreen, lightSimpleGreen, lightRed, lightPurple, lightYellow, brightWhite
//};
//
//void setColor(unsigned short backColor = 0, unsigned short textColor = 7){
//	char command[9] = "color 07";		//Ĭ����ɫ	
//	command[6] = '0' + backColor;		//��backColor������Ϊ�ַ��� 
//	command[7] = '0' + textColor;		//��textColor������Ϊ�ַ��� 
//	system(command);				//����ϵͳ���� 
//}
//
//int main(){
//
//	for (int i = 0; i < 10; i++){
//
//		if (i % 3 != 0){
//			printf("		");
//		}
//		else{
//			printf("\n\n");
//		}
//
//		setColor(black, red);
//		printf("	��������! ( Attacked )	");
//
//		Sleep(100);
//
//		setColor(black, green);
//		printf("	�Ѳ�ɱ����( Defend )	");
//
//		Sleep(200);
//	}
//
//	printf("\n\n\n�����������ϣ�\n\n\n");
//
//}

void color(short x)	//�Զ��庯���ݲ����ı���ɫ 
{
	if (x >= 0 && x <= 15)//������0-15�ķ�Χ��ɫ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//ֻ��һ���������ı�������ɫ 
	else//Ĭ�ϵ���ɫ��ɫ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int main()
{
	system("color 7");
		system("pause");
	//�����Զ���color(x)���� �ı����ɫ
	
	color(12);  printf("\n�Ұ���\n\n");
	return 0;
}