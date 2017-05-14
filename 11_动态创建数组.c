#include <stdio.h>

/**
 * 动态创建数组
 * 占位符：%d
 * 输入输出函数
 * malloc()分配内存方法
 * realloc()重新分配内存
 * 取地址 
 */
main(){
	//1、让用户输入一个数组长度
	printf("请输入一个数组的长度：\n");
	int length;
	scanf("%d", &length);
	printf("您输入的这个数组的长度为：%d\n", length);
	//2、根据长度，分配内存空间
	int* iArray = malloc(length*4);
	//3、让用户把数组中的元素依次的赋值
	int i;
	for(i=0;i<length;i++){
		printf("请您输入iArray[%d]的值：\n", i);
		scanf("%d", iArray+i);
	}
	//4、接收用户输入扩展数组长度
	printf("请您输入要扩展数组的长度：\n");
	int supportLength;
	scanf("%d", &supportLength);
	printf("您输入要扩展数组的长度为：%d\n", supportLength);
	//5、根据扩展的长度重新分配空间
	iArray = realloc(iArray, (length+supportLength)*4); 
	//6、把扩展长度的元素让用户赋值
	for(i=length;i<(length+supportLength);i++){
		printf("请您输入扩展元素iArray[%d]的值：\n", i);
		scanf("%d", iArray+i);
	}
	//7、输出数组
	for(i=0;i<(length+supportLength);i++){
		printf("iArray[%d]=%d\n", i, *(iArray+i));
	}
}
