#include <stdio.h>

/**
 * ��̬�������� 
 * ������� printf()
 * ���뺯�� scanf("ռλ��", �ڴ��ַ);
 * realloc()���·����ڴ� 
 */
main(){
	printf("��������Ҫ��������ĳ��ȣ�\n");
	//1�����û�����һ������
	int length;
	scanf("%d", &length);
	printf("����������ĳ���Ϊ��%d\n", length);
	//2�����ݳ��ȣ������ڴ�ռ�
	int* iArray = malloc(length * 4);
	//3�����û��������е�Ԫ�����εĸ�ֵ
	int i;
	for(i=0; i<length; i++){
		printf("������iArray[%d]��ֵ��", i);
		scanf("%d", iArray+i);
	}
	//4�������û�������չ���鳤��
	int suppLength;
	printf("��������Ҫ��չ����ĳ��ȣ�\n");
	scanf("%d", &suppLength);
	printf("��Ҫ��չ����ĳ���Ϊ��%d\n", suppLength);
	//5��������չ�ĳ������·���ռ�
	iArray = realloc(iArray, (length+suppLength) * 4);
	//6������չ���ȵ�Ԫ�����û���ֵ
	for(i=length; i<length+suppLength; i++){
		printf("������iArray[%d]��ֵ��", i);
		scanf("%d", iArray+i);
	}
	//7���������
	for(i=0; i<length+suppLength; i++){
		printf("iArray[%d]==%d\n", i, *(iArray+i));
	}
}
