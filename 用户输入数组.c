#include <stdio.h>

/**
 * �û�����һ������
 */
main(){
	printf("����������ĳ���\n");
	//1.�û���������ĳ���
	int length;
	scanf("%d", &length);
	printf("����������鳤��Ϊ��%d\n", length);
	//2.�����û�����ĳ��ȴ�������
	int iArray[length];
	//3.���û����������ֵ
	int i;
	for(i=0; i<length; i++){
		printf("������iArray[%d]��ֵ��\n", i);
//		scanf("%d", &iArray[i]);
		scanf("%d", iArray+i);//������ע�͵�д��Ч����ͬ 
	}
	//4.���������ݴ�ӡ����
	for(i=0; i<length; i++){
//		printf("iArray[%d]==%d\n", i, iArray[i]);
		printf("iArray[%d]==%d\n", i, *(iArray+i));//������ע�͵�д��Ч����ͬ
	}
}
