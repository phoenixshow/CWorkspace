#include <stdio.h>

/**
 * �ṹ��
 * 1������һ���ṹ��
 * 2�����ṹ�帳ֵ
 * 3��ȡֵ
 * 4�������ĳ��� 
 */
//����һ���ṹ��
struct Student{
	int age;//4���ֽ� 
	char sex;//1���ֽ�
	float score;//4���ֽ�
};

main(){
	//ֱ�Ӹ�ֵ 
	struct Student stu = {18, 'M', 88.8};
	//ȡֵ 
	printf("stu.age==%d\n", stu.age); 
	printf("stu.sex==%c\n", stu.sex);
	printf("stu.score==%.1f\n", stu.score);
	//����
	stu.sex = 'W';
	stu.age = 16;
	stu.score = 100;
	
	printf("stu.age==%d\n", stu.age); 
	printf("stu.sex==%c\n", stu.sex);
	printf("stu.score==%.1f\n", stu.score);
	
	printf("struct Student�ĳ��ȣ�%d\n", sizeof(struct Student));
}
