#include <stdio.h>

/**
 * 指针的长度——是4个字节(32-bit编译器打印，64位是8个字节) 
 */
main(){
	int* iPoint;
	char* cPoint;
	
	printf("iPoint的长度==%d\n", sizeof(iPoint));
	printf("cPoint的长度==%d\n", sizeof(cPoint));
	
	char cArray[] = {'H', 'E', 'L', 'L', 'O'};
	//取内存地址值 
	printf("cArray地址==%#x\n", &cArray); 
	printf("cArray[0]地址==%#x\n", &cArray[0]); 
	printf("cArray[1]地址==%#x\n", &cArray[1]); 
	printf("cArray[2]地址==%#x\n", &cArray[2]);
	//下面写法得到的内存地址与上面相同 
	printf("cArray地址==%#x\n", &cArray); 
	printf("cArray+0地址==%#x\n", cArray+0); 
	printf("cArray+1地址==%#x\n", cArray+1); 
	printf("cArray+2地址==%#x\n", cArray+2);
	
	int iArray[] = {1, 20, 31, 45, 58};
	
	printf("iArray+0==%#x\n", iArray+0);
	printf("iArray+1==%#x\n", iArray+1);
	printf("iArray+2==%#x\n", iArray+2);
	printf("iArray+3==%#x\n", iArray+3); 
}
