#include <stdio.h>

/**
 * 数组的简介
 * 数组是一块连续的内存空间
 * 数组的地址和数组首元素的地址相同 
 */
main(){
	//定义一个int类型的数组，并且赋值 
	int iArray[] = {1,2,3,4,5};
	
	char cArray[] = {'a','b','c','d','e'}; 
	
	//1、取某个下标对应的值——数组的取值	
	printf("iArray[0]==%d\n", iArray[0]);	
	printf("iArray[1]==%d\n", iArray[1]);	
	printf("iArray[2]==%d\n", iArray[2]);
	
	printf("cArray[0]==%c\n", cArray[0]); 
	printf("cArray[1]==%c\n", cArray[1]);
	printf("cArray[2]==%c\n", cArray[2]);
	
	//2、打印数组的地址
	printf("iArray地址==%#x\n", &iArray);
	printf("iArray地址==%#x\n", iArray);
	printf("iArray[0]地址==%#x\n", &iArray[0]);
	printf("iArray[1]地址==%#x\n", &iArray[1]);
	printf("iArray[2]地址==%#x\n", &iArray[2]);
	printf("iArray[3]地址==%#x\n", &iArray[3]);
	
	printf("cArray地址==%#x\n", &cArray);
	printf("cArray地址==%#x\n", cArray);
	printf("cArray[0]地址==%#x\n", &cArray[0]);
	printf("cArray[1]地址==%#x\n", &cArray[1]);
	printf("cArray[2]地址==%#x\n", &cArray[2]);
	printf("cArray[3]地址==%#x\n", &cArray[3]);
}
