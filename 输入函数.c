#include <stdio.h>

/**
 * ���뺯����scanf("ռλ��",�ڴ��ַ);
 * �൱��Java�е�System.in(); 
 * %d	int
 * %ld	long int
 * %c	char
 * %f	float
 * %u	�޷�����
 * %hd	������
 * %lf	double
 * %x	ʮ�����������int����long int����short int
 * %o	�˽������
 * %s	�ַ���
 */
int main(){

//	int i;
//	printf("����������������ʥ��һ������\n");
//	scanf("%d",&i);
//	printf("����������ʥ��һ�����ǣ�%d\n", i);
	
	//char���飬C�����У������Ų���д�ڱ�����ǰ�� 
//	char cArray[] = {'H','E','L','L','O'}; 
//	printf("cArray==%s\n", cArray);
//	int j;
//	for(j=0; j<5; j++){
//		printf("cArray[%d]==%c\n", j, cArray[j]);
//	}

	//�����ַ���
	char cArray[5];
	printf("������Hello��\n");
	//��C������û��String���ͣ����ǿ�����char��������ʾ
	scanf("%s", &cArray); 
	int j;
	for(j=0; j<sizeof(cArray); j++){
		printf("cArray[%d]==%c\n", j, cArray[j]);
	}
	printf("cArray==%s\n", cArray);
	
	//������һ���������ڴ�ռ䣬\0��ʾ���� 
	char aArray[] = {'a','b','c','d','e','\0'}; 
	printf("aArray==%s\n", aArray);
	
	//����һ��char���͵�ָ�����text����"I am Phoenix!"��ֵ��text���� 
	//ָ��ָ����ǵ�ַ����ַ����ָ�� 
	char* text = "I am Phoenix!";
	printf("text==%s\n", text);
	
	return 0;
}
