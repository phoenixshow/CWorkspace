#include <stdio.h>

/**
 * 数组的取值运算 
 */
main(){
	int iArray[] = {11,22,33,44,55};	
	char cArray[] = {'a','b','c','d','e'};
	
	//1、取地址 
	printf("地址iArray==%#x\n", iArray);
	printf("地址&iArray==%#x\n", &iArray);
	
	printf("地址&iArray[0]==%#x\n", &iArray[0]);
	printf("地址&iArray[1]==%#x\n", &iArray[1]);
	printf("地址&iArray[2]==%#x\n", &iArray[2]);
	
	printf("地址iArray+0==%#x\n", iArray+0);
	printf("地址iArray+1==%#x\n", iArray+1);
	printf("地址iArray+2==%#x\n", iArray+2);
	
	//2、取值
	printf("-------------------\n");
	printf("*(iArray+0)==%d\n", *(iArray+0));
	printf("*(iArray+1)==%d\n", *(iArray+1));
	printf("*(iArray+2)==%d\n", *(iArray+2));
	
	printf("*iArray+0==%d\n", *iArray+0);
	printf("*iArray+1==%d\n", *iArray+1);
	printf("*iArray+2==%d\n", *iArray+2);
}
