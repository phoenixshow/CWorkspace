#include <stdio.h>

/**
 * 指针：指针就是内存地址，内存地址就是指针 
 */
int main(){
	//定义int类型的变量i，并且赋值为100 
	int i = 100;
	//定义int类型的一级指针变量iPoint 
	int* iPoint;
	//&i表示取i变量对应的内存地址，再把i变量对应的内存地址赋值给iPoint指针变量，注意：指针接收的是内存地址 
	iPoint = &i;
	
	//指针取值*iPoint：取iPoint变量对应的地址里面对应的值，*iPoint == i的值 
	printf("*iPoint==%d\n",*iPoint); 
	
	//赋值运算
	*iPoint = 200;
	printf("*iPoint==%d\n",*iPoint); 
	
	return 0;
}
