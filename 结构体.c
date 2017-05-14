#include <stdio.h>

/**
 * 结构体
 */
//定义一个结构体 
struct Date{
	int year;
	int month;
	int day;
};
//定义一个结构体
struct Student{
	int age;		//4个字节 
	float score;	//4个字节
	char sex;		//1个字节
}; 
main(){	
	//使用结构体 
	struct Student stu = {18, 98.9, 'W'}; 
	//结构体取值
	printf("stu.age==%d\n", stu.age); 
	printf("stu.score==%.1f\n", stu.score); 
	printf("stu.sex==%c\n", stu.sex);
	//结构体赋值
	stu.age =  20;
	stu.score = 100;
	stu.sex = 'M';
	printf("stu.age==%d\n", stu.age); 
	printf("stu.score==%.1f\n", stu.score); 
	printf("stu.sex==%c\n", stu.sex);
	//结构体的长度
	printf("struct Student的长度==%d\n", sizeof(struct Student));
	printf("struct Date的长度==%d\n", sizeof(struct Date));
}
