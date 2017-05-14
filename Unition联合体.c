#include <stdio.h>

/**
 * 联合体
 */
//定义一个联合体，特点，所有的字段都是使用同一块内存空间
union Mix{
	long i;		//4个字节
	int k;		//4个字节
	char ii;	//1个字节
}; 
main(){
	printf("mix==%d\n", sizeof(union Mix));//4
	
	//实验
	union Mix m;
	m.i = 100;
	m.k = 123;
	printf("m.i==%d\n", m.i);//123
	printf("m.k==%d\n", m.k);//123
}
