#include <stdio.h>

/**
 * �ṹ��ָ�� 
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
	//�ṹ��ָ��
	struct Student* point = &stu; 
	struct Student** point2 = &point;
	//ȡֵ���� (*point).age�ȼ���point->age 
	printf("(*point).age==%d\n", (*point).age); 
	printf("point->age==%d\n", point->age);
	printf("point->score==%f\n", point->score); 
	printf("point->sex==%c\n", point->sex); 
	//��ֵ����
	point->age =  20;
	point->score = 100;
	point->sex = 'M'; 
	printf("point->age==%d\n", point->age);
	printf("point->score==%f\n", point->score); 
	printf("point->sex==%c\n", point->sex);
	//�����ṹ��ָ��ȡֵ (**point).age�ȼ���(*point)->age
	printf("(**point2).age==%d\n", (**point2).age);
	printf("(*point2)->age==%d\n", (*point2)->age);
	//����ָ�븳ֵ
//	(**point2).age = 2000;//���ַ�ʽ���� 
	(*point2)->age = 2000;
	printf("(**point2).age==%d\n", (**point2).age);
	printf("(*point2)->age==%d\n", (*point2)->age);
}
