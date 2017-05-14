#include <stdio.h>

/**
 * 静态内存分配 
 */
void func(int** address){//一级指针的地址要用二级指针来接收 
	//定义int类型的i变量，并且赋值100 
	int i = 100;
	//把i对应的地址赋值给iPoint变量 
	*address = &i; 
}
main(){
	//定义int类型的一级指针变量iPoint 
	int* iPoint;
	func(&iPoint);//传入一级指针的地址 
	
	printf("iPoint==%d\n", *iPoint);//只有第一次打印100，后面打印为0，因为静态内存分配是由系统分配，也是由系统回收，当再次调用的时候对应的值就变了 
	printf("iPoint==%d\n", *iPoint);//64位编辑器打印0，32位打印-2 
	printf("iPoint==%d\n", *iPoint);
}
