#include <stdio.h>

/**
 * ���������printf("����+ռλ��"); 
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
 * 
 * C����Ĭ��ȡС�����6λ�������ָ����ʾnλ����ռλ������Ϊ%.nf
 * ʮ���ƣ�12345678 
 * �����ƣ�101111000110000101001110
 * ��ʧ��           110000101001110
 */
int main(){
	unsigned ii = -123;
	printf("ii��ֵΪ��%u\n", ii); //�����4294967173 

	int i = 12345678;
	long l = 123456789;
	char c = 'a';
	float f = 3.1415;
	double d = 3.1415926535;
	
	printf("i��ֵΪ��%d\n", i);
	printf("l��ֵΪ��%ld\n", l);
	printf("c��ֵΪ��%c\n", c);
	printf("f��ֵΪ��%.4f\n", f);
	printf("d��ֵΪ��%.7lf\n", d);
	printf("i��ֵΪ��%hd\n", i);//�����24910�����ȶ�ʧ 
	
	return 0;
}
