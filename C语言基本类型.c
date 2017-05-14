#include <stdio.h>
//#include <stdlib.h>

/**
 * C语言的基本类型
 * char,int,float,double,long,short,signed,unsigned,void 
 * 函数可以得到某种类型的长度：sizeof(类型);
 * 长度是int类型，输出int类型需要用到对应的占位符：%d
 * 把信息输出到控制台上，用到输出函数：printf(内容); 
 * 
 * C语言和Java对比的一些区别
 * Java输出用+号相连，C用占位符，用,号相连，如果在C中用+号输出为日文乱码 
 * 在Java语言中char类型占2个字节，可以用于表示汉字，在C语言中char占1个字节，不可以表示汉字 
 * 在Java语言中long占8个字节，但是在C语言中占4个字节，因为在C99标准中定义：long类型的长度不可以小于整形 
 * C语言中没有boolean类型，用0表示false，用非0表示true 
 * C语言中没有byte类型
 * signed取值范围：-128~127
 * unsigned取值范围：0~255
 * void：无类型，任意类型，有点类似Java的Object 
 */
int main(){
	//输出函数
	printf("int 类型的长度为：%d\n",sizeof(int));//4
	printf("char 类型的长度为：%d\n",sizeof(char));//1
	printf("float 类型的长度为：%d\n",sizeof(float));//4
	printf("double 类型的长度为：%d\n",sizeof(double));//8
	printf("long 类型的长度为：%d\n",sizeof(long));//4
	printf("short 类型的长度为：%d\n",sizeof(short));//2
	printf("signed 类型的长度为：%d\n",sizeof(signed));//4
	printf("unsigned 类型的长度为：%d\n",sizeof(unsigned));//4
	printf("void 类型的长度为：%d\n",sizeof(void));//1
	
	//输出结果false 
	if(0){
		printf("true\n");
	}else{
		printf("false\n");
	}
	//输出结果true 
	if(-1){
		printf("true\n");
	}else{
		printf("false\n");
	}
	return 0;
}
