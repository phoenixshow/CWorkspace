#include <stdio.h>

/**
 * ö��
 * ö�ٵ�ֵ���� 
 * Ĭ����Ԫ�ص�ֵ��0 
 */
enum WeekDay{
	//Monday=10,�������16 //Monday=0��Monday,�������6
	Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};
main(){
	enum WeekDay day = Sunday;
	printf("%d\n", day);
}
