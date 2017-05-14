#include <stdio.h>

/**
 * 加深对指针的理解
 * %x输出的是16进制的内存地址 
 */
main(){
	int i = 100;
	int* iPoint;
	//&i取i对应的地址 
	iPoint = &i; 
	
	char c = 'a';
	char* cPoint;
	cPoint = &c;
	
//	//1.如果修改i的值，是否影响iPoint的值？没有影响 
//	printf("修改i的值前，iPoint对应的值是：%#x\n", iPoint); 
//	i = 123;
//	printf("修改i的值后，iPoint对应的值是：%#x\n", iPoint);
	
//	//2.如果修改iPoint的值，是否影响i的值？没有影响
//	printf("修改iPoint的值前，i对应的值是：%d\n", i); 
//	int j = 200;
//	iPoint = &j;
//	printf("修改iPoint的值后，i对应的值是：%d\n", i);
	
//	//3.如果修改i的值，是否影响*iPoint的值？有影响
//	printf("修改i的值前，*iPoint对应的值是：%d\n", *iPoint); 
//	i = 123;
//	printf("修改i的值后，*iPoint对应的值是：%d\n", *iPoint);
	
	//4.如果修改*iPoint的值，是否影响i的值？有影响
	printf("修改*iPoint的值前，i对应的值是：%d\n", i); 
	*iPoint = 500;
	printf("修改*iPoint的值后，i对应的值是：%d\n", i);
}
