#include <stdio.h>

/**
 * 结构体指针
 */
struct Student{
	int age;
	char sex;
	float score;
};

main(){
	//结构体 
	struct Student stu = {20, 'W', 88.5};
	printf("stu.age==%d\n", stu.age); 
	//结构体指针 
	struct Student* stuPoint;
	//赋地址值
	stuPoint = &stu;
	//取值 (*stuPoint).age
	printf("(*stuPoint).age==%d\n", (*stuPoint).age);
	//另外一种取值 (*stuPoint).等价于stuPoint->，例如：(*stuPoint).age等价于stuPoint->age
	printf("stuPoint->age==%d\n", stuPoint->age);
	//依此类推(**stuPoint).age等价于(*stuPoint)->age
}
