#include <stdio.h>

/**
 * �����ȡֵ���� 
 */
main(){
	int iArray[] = {11,22,33,44,55};	
	char cArray[] = {'a','b','c','d','e'};
	
	//1��ȡ��ַ 
	printf("��ַiArray==%#x\n", iArray);
	printf("��ַ&iArray==%#x\n", &iArray);
	
	printf("��ַ&iArray[0]==%#x\n", &iArray[0]);
	printf("��ַ&iArray[1]==%#x\n", &iArray[1]);
	printf("��ַ&iArray[2]==%#x\n", &iArray[2]);
	
	printf("��ַiArray+0==%#x\n", iArray+0);
	printf("��ַiArray+1==%#x\n", iArray+1);
	printf("��ַiArray+2==%#x\n", iArray+2);
	
	//2��ȡֵ
	printf("-------------------\n");
	printf("*(iArray+0)==%d\n", *(iArray+0));
	printf("*(iArray+1)==%d\n", *(iArray+1));
	printf("*(iArray+2)==%d\n", *(iArray+2));
	
	printf("*iArray+0==%d\n", *iArray+0);
	printf("*iArray+1==%d\n", *iArray+1);
	printf("*iArray+2==%d\n", *iArray+2);
}
