#include <stdio.h>

/**
 * ��̬�ڴ���� 
 */
void func(int** address){//һ��ָ��ĵ�ַҪ�ö���ָ�������� 
	//����int���͵�i���������Ҹ�ֵ100 
	int i = 100;
	//��i��Ӧ�ĵ�ַ��ֵ��iPoint���� 
	*address = &i; 
}
main(){
	//����int���͵�һ��ָ�����iPoint 
	int* iPoint;
	func(&iPoint);//����һ��ָ��ĵ�ַ 
	
	printf("iPoint==%d\n", *iPoint);//ֻ�е�һ�δ�ӡ100�������ӡΪ0����Ϊ��̬�ڴ��������ϵͳ���䣬Ҳ����ϵͳ���գ����ٴε��õ�ʱ���Ӧ��ֵ�ͱ��� 
	printf("iPoint==%d\n", *iPoint);//64λ�༭����ӡ0��32λ��ӡ-2 
	printf("iPoint==%d\n", *iPoint);
}
