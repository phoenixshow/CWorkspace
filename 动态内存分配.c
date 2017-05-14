#include <stdio.h>

/**
 * 动态内存分配 
 */
void func(int** address){//一级指针的地址要用二级指针来接收 
	int i = 100;
	int* temp;
	//malloc(int)函数返回的是内存地址
	temp = malloc(sizeof(int));
	//把i对应的值，赋值给temp地址对应的值 
	*temp = i;
	//把address对应的地址对应的值修改成temp 
	*address = temp;
	free(temp);
}
main(){
	//定义int类型的一级指针变量iPoint 
	int* iPoint;
	func(&iPoint);//传入一级指针的地址 
	
	printf("iPoint==%d\n", *iPoint);//三次打印都是100
	printf("iPoint==%d\n", *iPoint);
	printf("iPoint==%d\n", *iPoint);
}
