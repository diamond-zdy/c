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
//	   char command[9] = "color 07";		//默认颜色	
//	   command[6] = '0' + backColor;		//将backColor变量改为字符型 
//	   command[7] = '0' + textColor;		//将textColor变量改为字符型 
//	   system(command);				//调用系统函数 
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
//		Sleep(1000);//停止操作1秒钟
//		system("cls");//打印数据清空
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
//	char command[9] = "color 07";		//默认颜色	
//	command[6] = '0' + backColor;		//将backColor变量改为字符型 
//	command[7] = '0' + textColor;		//将textColor变量改为字符型 
//	system(command);				//调用系统函数 
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
//		printf("	病毒入侵! ( Attacked )	");
//
//		Sleep(100);
//
//		setColor(black, green);
//		printf("	已查杀病毒( Defend )	");
//
//		Sleep(200);
//	}
//
//	printf("\n\n\n病毒已清除完毕！\n\n\n");
//
//}

void color(short x)	//自定义函根据参数改变颜色 
{
	if (x >= 0 && x <= 15)//参数在0-15的范围颜色
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//只有一个参数，改变字体颜色 
	else//默认的颜色白色
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int main()
{
	system("color 7");
		system("pause");
	//调用自定义color(x)函数 改变的颜色
	
	color(12);  printf("\n我爱你\n\n");
	return 0;
}