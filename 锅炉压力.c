#include <stdio.h>

/**
 * �õ���¯��ѹ��ֵ 0~250֮�� 
 */
int getPressure(){
	int pressure = rand()%250;
	return pressure;
}
main(){	
	while(1){
		sleep(1);//�� 
		int pressure = getPressure();
		printf("��ǰ��¯ѹ��ֵ�ǣ�%d\n", pressure);
	}
}
