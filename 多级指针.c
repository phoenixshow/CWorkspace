#include <stdio.h>

/**
 * 多级指针
 * 指针指向的是内存地址
 * 地址就是指针 
 */
main(){
	//定义一个int类型的变量i，并且赋值为100 
	int i = 100;
	//定义一个int类型的一级指针变量address1，并且把i的内存地址赋值给它
	int* address1 = &i;
	//定义一个int类型的二级指针变量address2，并且把address1对应的地址赋值给它
	int** address2 = &address1;
	//定义三级指针 
	int*** address3 = &address2;
	//定义四级指针
	int**** address4 = &address3; 
	
	//多级指针取值 ****address4得到的值是100
	printf("****address4==%d\n", ****address4); 
	****address4 = 200;
	printf("****address4==%d\n", ****address4); 
	
	printf("***address3==%d\n", ***address3); 
	***address3 = 300;
	printf("***address3==%d\n", ***address3); 
}
