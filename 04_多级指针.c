#include <stdio.h>

/**
 * �༶ָ�� 
 * ָ��ָ����ǵ�ַ����ַ����ָ�� 
 */
main(){
	//����һ��int���͵�i���������Ҹ�ֵΪ100 
	int i = 100;
	//����int���͵�һ��ָ�����iPoint1�����Ҹ�ֵΪi�ĵ�ַ 
	int* iPoint1 = &i;
	//����int���͵Ķ���ָ�����iPoint2�����Ҹ�ֵΪiPoint1�ĵ�ַ 
	int** iPoint2 = &iPoint1;
	//����int���͵�����ָ�����iPoint3�����Ҹ�ֵΪiPoint2�ĵ�ַ 
	int*** iPoint3 = &iPoint2;
	//����int���͵��ļ�ָ�����iPoint4�����Ҹ�ֵΪiPoint3�ĵ�ַ 
	int**** iPoint4 = &iPoint3;
	
	//��ôȡֵ�͸�ֵ
	//ȡֵ��****iPoint4���õ���ֵ��100
	printf("ȡֵ****iPoint4==%d\n", ****iPoint4);
	//���ļ�ָ����****iPoint4 == i
	****iPoint4 = 500;
	printf("ȡֵ****iPoint4==%d\n", ****iPoint4); 
}
