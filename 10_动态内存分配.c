#include <stdio.h>

/**
 * ��̬�ڴ���� 
 */
func(int** iPoint){
	int i = 123;
	//����int���͵�һ��ָ�����temp����ǰû�и�ֵ 
	int* temp;
	//malloc(int)���������ڴ�ռ䣬���ҷ��ص�ַ
	temp = malloc(sizeof(int)); 
	//��temp������Ӧ�ĵ�ַ��ֵΪi��Ӧ��ֵ123 
	*temp = i;
	//iPoint��Ӧ�ĵ�ַ��ֵΪtemp�ĵ�ַ 
	*iPoint = temp; 
	free(temp);
}

main(){
	//����int���͵�һ��ָ�����iPoint 
	int* iPoint; 
	func(&iPoint);
	
	printf("*iPoint==%d\n", *iPoint);
	
	printf("*iPoint==%d\n", *iPoint);
	printf("*iPoint==%d\n", *iPoint);
	printf("*iPoint==%d\n", *iPoint);
}
