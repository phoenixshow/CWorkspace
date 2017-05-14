#include <stdio.h>

/**
 * 多级指针 
 * 指针指向的是地址，地址就是指针 
 */
main(){
	//定义一个int类型的i变量，并且赋值为100 
	int i = 100;
	//定义int类型的一级指针变量iPoint1，并且赋值为i的地址 
	int* iPoint1 = &i;
	//定义int类型的二级指针变量iPoint2，并且赋值为iPoint1的地址 
	int** iPoint2 = &iPoint1;
	//定义int类型的三级指针变量iPoint3，并且赋值为iPoint2的地址 
	int*** iPoint3 = &iPoint2;
	//定义int类型的四级指针变量iPoint4，并且赋值为iPoint3的地址 
	int**** iPoint4 = &iPoint3;
	
	//怎么取值和赋值
	//取值用****iPoint4，得到的值是100
	printf("取值****iPoint4==%d\n", ****iPoint4);
	//在四级指针中****iPoint4 == i
	****iPoint4 = 500;
	printf("取值****iPoint4==%d\n", ****iPoint4); 
}
