#include <stdio.h>

/**
 * ������
 */
//����һ�������壬�ص㣺���е��ֶζ���ʹ��ͬһ���ڴ�ռ� 
union Mix{
	long i;//4���ֽ�
	int k;//4���ֽ�
	char ii;//1���ֽ� 
};

main(){
	//ʵ��
	union Mix m; 
	m.i = 100;
	m.k = 123;
	printf("m.i==%d\n",m.i);
	printf("m.k==%d\n",m.k);
}
