#include <stdio.h>

/**
 * ����ļ��
 * ������һ���������ڴ�ռ�
 * ����ĵ�ַ��������Ԫ�صĵ�ַ��ͬ 
 */
main(){
	//����һ��int���͵����飬���Ҹ�ֵ 
	int iArray[] = {1,2,3,4,5};
	
	char cArray[] = {'a','b','c','d','e'}; 
	
	//1��ȡĳ���±��Ӧ��ֵ���������ȡֵ	
	printf("iArray[0]==%d\n", iArray[0]);	
	printf("iArray[1]==%d\n", iArray[1]);	
	printf("iArray[2]==%d\n", iArray[2]);
	
	printf("cArray[0]==%c\n", cArray[0]); 
	printf("cArray[1]==%c\n", cArray[1]);
	printf("cArray[2]==%c\n", cArray[2]);
	
	//2����ӡ����ĵ�ַ
	printf("iArray��ַ==%#x\n", &iArray);
	printf("iArray��ַ==%#x\n", iArray);
	printf("iArray[0]��ַ==%#x\n", &iArray[0]);
	printf("iArray[1]��ַ==%#x\n", &iArray[1]);
	printf("iArray[2]��ַ==%#x\n", &iArray[2]);
	printf("iArray[3]��ַ==%#x\n", &iArray[3]);
	
	printf("cArray��ַ==%#x\n", &cArray);
	printf("cArray��ַ==%#x\n", cArray);
	printf("cArray[0]��ַ==%#x\n", &cArray[0]);
	printf("cArray[1]��ַ==%#x\n", &cArray[1]);
	printf("cArray[2]��ַ==%#x\n", &cArray[2]);
	printf("cArray[3]��ַ==%#x\n", &cArray[3]);
}
