#include <stdio.h>

/**
 * 输出函数：printf("内容+占位符"); 
 * %d	int
 * %ld	long int
 * %c	char
 * %f	float
 * %u	无符号数
 * %hd	短整型
 * %lf	double
 * %x	十六进制输出，int或者long int或者short int
 * %o	八进制输出
 * %s	字符串
 * 
 * C语言默认取小数点后6位，如果想指定显示n位数，占位符就设为%.nf
 * 十进制：12345678 
 * 二进制：101111000110000101001110
 * 丢失：           110000101001110
 */
int main(){
	unsigned ii = -123;
	printf("ii的值为：%u\n", ii); //输出：4294967173 

	int i = 12345678;
	long l = 123456789;
	char c = 'a';
	float f = 3.1415;
	double d = 3.1415926535;
	
	printf("i的值为：%d\n", i);
	printf("l的值为：%ld\n", l);
	printf("c的值为：%c\n", c);
	printf("f的值为：%.4f\n", f);
	printf("d的值为：%.7lf\n", d);
	printf("i的值为：%hd\n", i);//输出：24910，精度丢失 
	
	return 0;
}
