#include <stdio.h>

/**
 * 结构体指针 
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
	//结构体指针
	struct Student* point = &stu; 
	struct Student** point2 = &point;
	//取值运算 (*point).age等价于point->age 
	printf("(*point).age==%d\n", (*point).age); 
	printf("point->age==%d\n", point->age);
	printf("point->score==%f\n", point->score); 
	printf("point->sex==%c\n", point->sex); 
	//赋值运算
	point->age =  20;
	point->score = 100;
	point->sex = 'M'; 
	printf("point->age==%d\n", point->age);
	printf("point->score==%f\n", point->score); 
	printf("point->sex==%c\n", point->sex);
	//二级结构体指针取值 (**point).age等价于(*point)->age
	printf("(**point2).age==%d\n", (**point2).age);
	printf("(*point2)->age==%d\n", (*point2)->age);
	//二级指针赋值
//	(**point2).age = 2000;//两种方式都可 
	(*point2)->age = 2000;
	printf("(**point2).age==%d\n", (**point2).age);
	printf("(*point2)->age==%d\n", (*point2)->age);
}
