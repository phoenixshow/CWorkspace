#include <stdio.h>

/**
 * ��̬�ڴ���� 
 */
func(int** iPoint){
	int i = 100;
	//*iPoint�����һ��ָ���� 
	*iPoint = &i;
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
