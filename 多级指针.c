#include <stdio.h>

/**
 * �༶ָ��
 * ָ��ָ������ڴ��ַ
 * ��ַ����ָ�� 
 */
main(){
	//����һ��int���͵ı���i�����Ҹ�ֵΪ100 
	int i = 100;
	//����һ��int���͵�һ��ָ�����address1�����Ұ�i���ڴ��ַ��ֵ����
	int* address1 = &i;
	//����һ��int���͵Ķ���ָ�����address2�����Ұ�address1��Ӧ�ĵ�ַ��ֵ����
	int** address2 = &address1;
	//��������ָ�� 
	int*** address3 = &address2;
	//�����ļ�ָ��
	int**** address4 = &address3; 
	
	//�༶ָ��ȡֵ ****address4�õ���ֵ��100
	printf("****address4==%d\n", ****address4); 
	****address4 = 200;
	printf("****address4==%d\n", ****address4); 
	
	printf("***address3==%d\n", ***address3); 
	***address3 = 300;
	printf("***address3==%d\n", ***address3); 
}
