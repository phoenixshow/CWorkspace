#include <stdio.h>

/**
 * ������
 */
//����һ�������壬�ص㣬���е��ֶζ���ʹ��ͬһ���ڴ�ռ�
union Mix{
	long i;		//4���ֽ�
	int k;		//4���ֽ�
	char ii;	//1���ֽ�
}; 
main(){
	printf("mix==%d\n", sizeof(union Mix));//4
	
	//ʵ��
	union Mix m;
	m.i = 100;
	m.k = 123;
	printf("m.i==%d\n", m.i);//123
	printf("m.k==%d\n", m.k);//123
}
