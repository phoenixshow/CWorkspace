#include <stdio.h>

/**
 * 枚举
 * 值是递增的
 * 默认是0开始
 * 枚举里面的类型都是int类型 
 */
enum WeekDay{
	Monday=6,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};

main(){
	enum WeekDay day = Wednesday;
	printf("%d\n",day);
}
