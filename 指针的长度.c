#include <stdio.h>

/**
 * ָ��ĳ��ȡ�����4���ֽ�(32-bit��������ӡ��64λ��8���ֽ�) 
 */
main(){
	int* iPoint;
	char* cPoint;
	
	printf("iPoint�ĳ���==%d\n", sizeof(iPoint));
	printf("cPoint�ĳ���==%d\n", sizeof(cPoint));
	
	char cArray[] = {'H', 'E', 'L', 'L', 'O'};
	//ȡ�ڴ��ֵַ 
	printf("cArray��ַ==%#x\n", &cArray); 
	printf("cArray[0]��ַ==%#x\n", &cArray[0]); 
	printf("cArray[1]��ַ==%#x\n", &cArray[1]); 
	printf("cArray[2]��ַ==%#x\n", &cArray[2]);
	//����д���õ����ڴ��ַ��������ͬ 
	printf("cArray��ַ==%#x\n", &cArray); 
	printf("cArray+0��ַ==%#x\n", cArray+0); 
	printf("cArray+1��ַ==%#x\n", cArray+1); 
	printf("cArray+2��ַ==%#x\n", cArray+2);
	
	int iArray[] = {1, 20, 31, 45, 58};
	
	printf("iArray+0==%#x\n", iArray+0);
	printf("iArray+1==%#x\n", iArray+1);
	printf("iArray+2==%#x\n", iArray+2);
	printf("iArray+3==%#x\n", iArray+3); 
}
