#include <stdio.h>

/**
 * �ṹ��ָ��
 */
struct Student{
	int age;
	char sex;
	float score;
};

main(){
	//�ṹ�� 
	struct Student stu = {20, 'W', 88.5};
	printf("stu.age==%d\n", stu.age); 
	//�ṹ��ָ�� 
	struct Student* stuPoint;
	//����ֵַ
	stuPoint = &stu;
	//ȡֵ (*stuPoint).age
	printf("(*stuPoint).age==%d\n", (*stuPoint).age);
	//����һ��ȡֵ (*stuPoint).�ȼ���stuPoint->�����磺(*stuPoint).age�ȼ���stuPoint->age
	printf("stuPoint->age==%d\n", stuPoint->age);
	//��������(**stuPoint).age�ȼ���(*stuPoint)->age
}
