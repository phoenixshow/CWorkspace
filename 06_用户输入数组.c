#include <stdio.h>

/**
 * �û��������� 
 */
main(){
	//1�����û���������ĳ���
	printf("�ף�������һ������ĳ��ȣ�\n");
	int length;
	scanf("%d", &length);
	printf("����������ĳ���Ϊ��%d\n", length);
	//2�������û�����ĳ��ȴ�������
	int iArray[length];
	//3�����θ��������Ԫ��
	int i;
	for(i=0;i<length;i++){
		printf("�ף�������iArray[%d]��ֵ��\n", i);
		scanf("%d", &iArray[i]);
	}
	//4�������������ӡ����
	for(i=0;i<length;i++){
		printf("iArray[%d]==%d\n", i, iArray[i]);
	}
}
