#include <stdio.h>

/**
 * ��̬��������
 * ռλ����%d
 * �����������
 * malloc()�����ڴ淽��
 * realloc()���·����ڴ�
 * ȡ��ַ 
 */
main(){
	//1�����û�����һ�����鳤��
	printf("������һ������ĳ��ȣ�\n");
	int length;
	scanf("%d", &length);
	printf("��������������ĳ���Ϊ��%d\n", length);
	//2�����ݳ��ȣ������ڴ�ռ�
	int* iArray = malloc(length*4);
	//3�����û��������е�Ԫ�����εĸ�ֵ
	int i;
	for(i=0;i<length;i++){
		printf("��������iArray[%d]��ֵ��\n", i);
		scanf("%d", iArray+i);
	}
	//4�������û�������չ���鳤��
	printf("��������Ҫ��չ����ĳ��ȣ�\n");
	int supportLength;
	scanf("%d", &supportLength);
	printf("������Ҫ��չ����ĳ���Ϊ��%d\n", supportLength);
	//5��������չ�ĳ������·���ռ�
	iArray = realloc(iArray, (length+supportLength)*4); 
	//6������չ���ȵ�Ԫ�����û���ֵ
	for(i=length;i<(length+supportLength);i++){
		printf("����������չԪ��iArray[%d]��ֵ��\n", i);
		scanf("%d", iArray+i);
	}
	//7���������
	for(i=0;i<(length+supportLength);i++){
		printf("iArray[%d]=%d\n", i, *(iArray+i));
	}
}
