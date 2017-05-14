#include <stdio.h>

/**
 * 返回一个以上的值 
 */
change(int* a, int* b){
	*a = 1;
	*b = 1;
} 

main(){
	//a表示WIFI的状态，0开，1关
	//b表示GPS的状态，0开，1关 
	int a = 0;
	int b = 0;
	
	//一键关闭WIFI和GPS
	change(&a, &b); 
	
	printf("a==%d\n", a);
	printf("b==%d\n", b);
}
