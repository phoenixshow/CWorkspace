#include <stdio.h>

/**
 * ����һ�����ϵ�ֵ 
 */
change(int* a, int* b){
	*a = 1;
	*b = 1;
} 

main(){
	//a��ʾWIFI��״̬��0����1��
	//b��ʾGPS��״̬��0����1�� 
	int a = 0;
	int b = 0;
	
	//һ���ر�WIFI��GPS
	change(&a, &b); 
	
	printf("a==%d\n", a);
	printf("b==%d\n", b);
}
