#include <stdio.h>

/**
 * 结构体
 * 1、定义一个结构体
 * 2、给结构体赋值
 * 3、取值
 * 4、看他的长度 
 */
//定义一个结构体
struct Student{
	int age;//4个字节 
	char sex;//1个字节
	float score;//4个字节
};

main(){
	//直接赋值 
	struct Student stu = {18, 'M', 88.8};
	//取值 
	printf("stu.age==%d\n", stu.age); 
	printf("stu.sex==%c\n", stu.sex);
	printf("stu.score==%.1f\n", stu.score);
	//变性
	stu.sex = 'W';
	stu.age = 16;
	stu.score = 100;
	
	printf("stu.age==%d\n", stu.age); 
	printf("stu.sex==%c\n", stu.sex);
	printf("stu.score==%.1f\n", stu.score);
	
	printf("struct Student的长度：%d\n", sizeof(struct Student));
}
