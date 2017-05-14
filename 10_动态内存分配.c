#include <stdio.h>

/**
 * 动态内存分配 
 */
func(int** iPoint){
	int i = 123;
	//定义int类型的一级指针变量temp，当前没有赋值 
	int* temp;
	//malloc(int)函数申请内存空间，并且返回地址
	temp = malloc(sizeof(int)); 
	//把temp变量对应的地址赋值为i对应的值123 
	*temp = i;
	//iPoint对应的地址赋值为temp的地址 
	*iPoint = temp; 
	free(temp);
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
