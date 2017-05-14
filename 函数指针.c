#include <stdio.h>

/**
 * 函数指针 
 */
//定义一个函数 
int add(int x, int y){
	return x + y;
}
main(){
	//定义函数指针
	int (*android)(int x, int y);
	//函数指针赋值
	android = add;
	//使用函数指针
	int result = android(30, 8);
	printf("result==%d\n", result);
}
