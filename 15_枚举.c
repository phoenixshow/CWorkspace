#include <stdio.h>

/**
 * ö��
 * ֵ�ǵ�����
 * Ĭ����0��ʼ
 * ö����������Ͷ���int���� 
 */
enum WeekDay{
	Monday=6,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};

main(){
	enum WeekDay day = Wednesday;
	printf("%d\n",day);
}
