#include <stdio.h>

/**
 * ����ָ��
 * 1������һ������
 * 2�����庯��ָ��
 * 3����ֵ
 * 4��ʹ�� 
 */
//1������һ������
int add(int x, int y){
	return x+y;
} 

main(){
	//2�����庯��ָ��
	int (*phoenix)(int x, int y);
	//3����ֵ
	phoenix = add;
	//4��ʹ��
	int result = phoenix(36, 18);
	printf("result==%d\n", result);
}
