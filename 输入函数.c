#include <stdio.h>

/**
 * 输入函数：scanf("占位符",内存地址);
 * 相当于Java中的System.in(); 
 * %d	int
 * %ld	long int
 * %c	char
 * %f	float
 * %u	无符号数
 * %hd	短整型
 * %lf	double
 * %x	十六进制输出，int或者long int或者short int
 * %o	八进制输出
 * %s	字符串
 */
int main(){

//	int i;
//	printf("请输入您心中最神圣的一个数：\n");
//	scanf("%d",&i);
//	printf("您心中最神圣的一个数是：%d\n", i);
	
	//char数组，C语言中，中括号不能写在变量的前面 
//	char cArray[] = {'H','E','L','L','O'}; 
//	printf("cArray==%s\n", cArray);
//	int j;
//	for(j=0; j<5; j++){
//		printf("cArray[%d]==%c\n", j, cArray[j]);
//	}

	//输入字符串
	char cArray[5];
	printf("请输入Hello：\n");
	//在C语言中没有String类型，但是可以用char数组来表示
	scanf("%s", &cArray); 
	int j;
	for(j=0; j<sizeof(cArray); j++){
		printf("cArray[%d]==%c\n", j, cArray[j]);
	}
	printf("cArray==%s\n", cArray);
	
	//数组是一块连续的内存空间，\0表示结束 
	char aArray[] = {'a','b','c','d','e','\0'}; 
	printf("aArray==%s\n", aArray);
	
	//定义一个char类型的指针变量text，把"I am Phoenix!"赋值给text变量 
	//指针指向的是地址，地址就是指针 
	char* text = "I am Phoenix!";
	printf("text==%s\n", text);
	
	return 0;
}
