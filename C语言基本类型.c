#include <stdio.h>
//#include <stdlib.h>

/**
 * C���ԵĻ�������
 * char,int,float,double,long,short,signed,unsigned,void 
 * �������Եõ�ĳ�����͵ĳ��ȣ�sizeof(����);
 * ������int���ͣ����int������Ҫ�õ���Ӧ��ռλ����%d
 * ����Ϣ���������̨�ϣ��õ����������printf(����); 
 * 
 * C���Ժ�Java�Աȵ�һЩ����
 * Java�����+��������C��ռλ������,�������������C����+�����Ϊ�������� 
 * ��Java������char����ռ2���ֽڣ��������ڱ�ʾ���֣���C������charռ1���ֽڣ������Ա�ʾ���� 
 * ��Java������longռ8���ֽڣ�������C������ռ4���ֽڣ���Ϊ��C99��׼�ж��壺long���͵ĳ��Ȳ�����С������ 
 * C������û��boolean���ͣ���0��ʾfalse���÷�0��ʾtrue 
 * C������û��byte����
 * signedȡֵ��Χ��-128~127
 * unsignedȡֵ��Χ��0~255
 * void�������ͣ��������ͣ��е�����Java��Object 
 */
int main(){
	//�������
	printf("int ���͵ĳ���Ϊ��%d\n",sizeof(int));//4
	printf("char ���͵ĳ���Ϊ��%d\n",sizeof(char));//1
	printf("float ���͵ĳ���Ϊ��%d\n",sizeof(float));//4
	printf("double ���͵ĳ���Ϊ��%d\n",sizeof(double));//8
	printf("long ���͵ĳ���Ϊ��%d\n",sizeof(long));//4
	printf("short ���͵ĳ���Ϊ��%d\n",sizeof(short));//2
	printf("signed ���͵ĳ���Ϊ��%d\n",sizeof(signed));//4
	printf("unsigned ���͵ĳ���Ϊ��%d\n",sizeof(unsigned));//4
	printf("void ���͵ĳ���Ϊ��%d\n",sizeof(void));//1
	
	//������false 
	if(0){
		printf("true\n");
	}else{
		printf("false\n");
	}
	//������true 
	if(-1){
		printf("true\n");
	}else{
		printf("false\n");
	}
	return 0;
}
