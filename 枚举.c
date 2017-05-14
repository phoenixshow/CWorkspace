#include <stdio.h>

/**
 * 枚举
 * 枚举的值递增 
 * 默认首元素的值是0 
 */
enum WeekDay{
	//Monday=10,……输出16 //Monday=0或Monday,……输出6
	Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};
main(){
	enum WeekDay day = Sunday;
	printf("%d\n", day);
}
