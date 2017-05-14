#include <stdio.h>

/**
 * 函数指针
 * 1、定义一个函数
 * 2、定义函数指针
 * 3、赋值
 * 4、使用 
 */
//1、定义一个函数
int add(int x, int y){
	return x+y;
} 

main(){
	//2、定义函数指针
	int (*phoenix)(int x, int y);
	//3、赋值
	phoenix = add;
	//4、使用
	int result = phoenix(36, 18);
	printf("result==%d\n", result);
}
