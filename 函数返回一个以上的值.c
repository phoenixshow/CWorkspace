#include <stdio.h>

/**
 * �������ض��ֵ
 */
void colse(int* a, int* b){
	*a = 0;
	*b = 0;
}
main(){ 
	//һ���ر�GPS��Wifi
	//1������ǿ���0�����ǹر� 
	int a = 1;
	int b = 1;
	colse(&a, &b);
	printf("a==%d\n",a);
	printf("b==%d\n",b);
}
