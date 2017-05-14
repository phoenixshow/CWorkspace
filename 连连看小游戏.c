#include <stdio.h>

/**
 * 加深对指针的理解：连连看游戏，玩得越快就赢 
 */
int main(){
	printf("我是连连看游戏，欢迎来玩我！！\n");
	int i;
	for(i=60;i>0;i--){
		//休眠1秒 //有些编译软件用Sleep，有些用_sleep 
		sleep(6);
		printf("游戏还剩的时间是：%d\n",i);
	}
	printf("恭喜帅哥，你真厉害！！！\n");
	
	return 0;
}
