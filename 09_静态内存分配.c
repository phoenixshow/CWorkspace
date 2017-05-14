#include <stdio.h>

/**
 * 静态内存分配 
 */
func(int** iPoint){
	int i = 100;
	//*iPoint变成是一级指针了 
	*iPoint = &i;
}

main(){
	//定义int类型的一级指针变量iPoint 
	int* iPoint; 
	func(&iPoint);
	
	printf("*iPoint==%d\n", *iPoint);
	
	printf("*iPoint==%d\n", *iPoint);
	printf("*iPoint==%d\n", *iPoint);
	printf("*iPoint==%d\n", *iPoint);
}
