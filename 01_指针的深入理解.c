#include <stdio.h>

/**
 * �����ָ������
 * %x�������16���Ƶ��ڴ��ַ 
 */
main(){
	int i = 100;
	int* iPoint;
	//&iȡi��Ӧ�ĵ�ַ 
	iPoint = &i; 
	
	char c = 'a';
	char* cPoint;
	cPoint = &c;
	
//	//1.����޸�i��ֵ���Ƿ�Ӱ��iPoint��ֵ��û��Ӱ�� 
//	printf("�޸�i��ֵǰ��iPoint��Ӧ��ֵ�ǣ�%#x\n", iPoint); 
//	i = 123;
//	printf("�޸�i��ֵ��iPoint��Ӧ��ֵ�ǣ�%#x\n", iPoint);
	
//	//2.����޸�iPoint��ֵ���Ƿ�Ӱ��i��ֵ��û��Ӱ��
//	printf("�޸�iPoint��ֵǰ��i��Ӧ��ֵ�ǣ�%d\n", i); 
//	int j = 200;
//	iPoint = &j;
//	printf("�޸�iPoint��ֵ��i��Ӧ��ֵ�ǣ�%d\n", i);
	
//	//3.����޸�i��ֵ���Ƿ�Ӱ��*iPoint��ֵ����Ӱ��
//	printf("�޸�i��ֵǰ��*iPoint��Ӧ��ֵ�ǣ�%d\n", *iPoint); 
//	i = 123;
//	printf("�޸�i��ֵ��*iPoint��Ӧ��ֵ�ǣ�%d\n", *iPoint);
	
	//4.����޸�*iPoint��ֵ���Ƿ�Ӱ��i��ֵ����Ӱ��
	printf("�޸�*iPoint��ֵǰ��i��Ӧ��ֵ�ǣ�%d\n", i); 
	*iPoint = 500;
	printf("�޸�*iPoint��ֵ��i��Ӧ��ֵ�ǣ�%d\n", i);
}
