#include <stdio.h>

/**
 * 用户输入数组 
 */
main(){
	//1、让用户输入数组的长度
	printf("亲！请输入一个数组的长度：\n");
	int length;
	scanf("%d", &length);
	printf("您输入数组的长度为：%d\n", length);
	//2、根据用户输入的长度创建数组
	int iArray[length];
	//3、依次给数组填充元素
	int i;
	for(i=0;i<length;i++){
		printf("亲！请输入iArray[%d]的值：\n", i);
		scanf("%d", &iArray[i]);
	}
	//4、把数组遍历打印出来
	for(i=0;i<length;i++){
		printf("iArray[%d]==%d\n", i, iArray[i]);
	}
}
