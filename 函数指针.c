#include <stdio.h>

/**
 * ����ָ�� 
 */
//����һ������ 
int add(int x, int y){
	return x + y;
}
main(){
	//���庯��ָ��
	int (*android)(int x, int y);
	//����ָ�븳ֵ
	android = add;
	//ʹ�ú���ָ��
	int result = android(30, 8);
	printf("result==%d\n", result);
}
