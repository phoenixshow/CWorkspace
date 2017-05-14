#include <stdio.h>

/**
 * 指针的长度
 * 64位编译器占8个字节
 * 32位编译器占4个字节 
 */
main(){
	char* cPoint;
	int* iPoint;
	printf("cPoint的长度：%d\n", sizeof(cPoint));
	printf("iPoint的长度：%d\n", sizeof(iPoint));
}
