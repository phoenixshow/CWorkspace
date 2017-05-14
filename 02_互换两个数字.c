#include <stdio.h>

/**
 * 互换两个数字 
 * 1、在main()方法中互换——可以互换 
 * 2、在单独的方法中互换——值传递，无法修改值 
 * 3、传入内存地址并且在方法中互换 
 */

func(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

func2(int* aPoint, int* bPoint){
	//定义一个int类型的变量temp，并且赋值为aPoint指针变量对应的地址对应的值 
	int temp = *aPoint;
	//把aPoint对应的地址对应的值，修改成bPoint变量对应的地址的值 
	*aPoint = *bPoint;
	//把bPoint对应的地址对应的值，修改成123
	*bPoint = temp;
}

main(){
	int a = 123;
	int b = 456;
	
//	int temp = a;
//	a = b;
//	b = temp;

//	func(a,b);
	func2(&a, &b);
	
	printf("a==%d\n", a);
	printf("b==%d\n", b);
}
