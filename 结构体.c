#include <stdio.h>

/**
 * �ṹ��
 */
//����һ���ṹ�� 
struct Date{
	int year;
	int month;
	int day;
};
//����һ���ṹ��
struct Student{
	int age;		//4���ֽ� 
	float score;	//4���ֽ�
	char sex;		//1���ֽ�
}; 
main(){	
	//ʹ�ýṹ�� 
	struct Student stu = {18, 98.9, 'W'}; 
	//�ṹ��ȡֵ
	printf("stu.age==%d\n", stu.age); 
	printf("stu.score==%.1f\n", stu.score); 
	printf("stu.sex==%c\n", stu.sex);
	//�ṹ�帳ֵ
	stu.age =  20;
	stu.score = 100;
	stu.sex = 'M';
	printf("stu.age==%d\n", stu.age); 
	printf("stu.score==%.1f\n", stu.score); 
	printf("stu.sex==%c\n", stu.sex);
	//�ṹ��ĳ���
	printf("struct Student�ĳ���==%d\n", sizeof(struct Student));
	printf("struct Date�ĳ���==%d\n", sizeof(struct Date));
}
