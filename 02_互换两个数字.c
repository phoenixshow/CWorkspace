#include <stdio.h>

/**
 * ������������ 
 * 1����main()�����л����������Ի��� 
 * 2���ڵ����ķ����л�������ֵ���ݣ��޷��޸�ֵ 
 * 3�������ڴ��ַ�����ڷ����л��� 
 */

func(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

func2(int* aPoint, int* bPoint){
	//����һ��int���͵ı���temp�����Ҹ�ֵΪaPointָ�������Ӧ�ĵ�ַ��Ӧ��ֵ 
	int temp = *aPoint;
	//��aPoint��Ӧ�ĵ�ַ��Ӧ��ֵ���޸ĳ�bPoint������Ӧ�ĵ�ַ��ֵ 
	*aPoint = *bPoint;
	//��bPoint��Ӧ�ĵ�ַ��Ӧ��ֵ���޸ĳ�123
	*bPoint = temp;
}

main(){
	int a = 123;
	int b = 456;
	
//	int temp = a;
//	a = b;
//	b = temp;

//	func(a,b);
	func2(&a, &b);
	
	printf("a==%d\n", a);
	printf("b==%d\n", b);
}
