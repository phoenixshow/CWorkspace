#include <stdio.h>

/**
 * ָ�룺ָ������ڴ��ַ���ڴ��ַ����ָ�� 
 */
int main(){
	//����int���͵ı���i�����Ҹ�ֵΪ100 
	int i = 100;
	//����int���͵�һ��ָ�����iPoint 
	int* iPoint;
	//&i��ʾȡi������Ӧ���ڴ��ַ���ٰ�i������Ӧ���ڴ��ַ��ֵ��iPointָ�������ע�⣺ָ����յ����ڴ��ַ 
	iPoint = &i;
	
	//ָ��ȡֵ*iPoint��ȡiPoint������Ӧ�ĵ�ַ�����Ӧ��ֵ��*iPoint == i��ֵ 
	printf("*iPoint==%d\n",*iPoint); 
	
	//��ֵ����
	*iPoint = 200;
	printf("*iPoint==%d\n",*iPoint); 
	
	return 0;
}
