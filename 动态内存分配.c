#include <stdio.h>

/**
 * ��̬�ڴ���� 
 */
void func(int** address){//һ��ָ��ĵ�ַҪ�ö���ָ�������� 
	int i = 100;
	int* temp;
	//malloc(int)�������ص����ڴ��ַ
	temp = malloc(sizeof(int));
	//��i��Ӧ��ֵ����ֵ��temp��ַ��Ӧ��ֵ 
	*temp = i;
	//��address��Ӧ�ĵ�ַ��Ӧ��ֵ�޸ĳ�temp 
	*address = temp;
	free(temp);
}
main(){
	//����int���͵�һ��ָ�����iPoint 
	int* iPoint;
	func(&iPoint);//����һ��ָ��ĵ�ַ 
	
	printf("iPoint==%d\n", *iPoint);//���δ�ӡ����100
	printf("iPoint==%d\n", *iPoint);
	printf("iPoint==%d\n", *iPoint);
}
