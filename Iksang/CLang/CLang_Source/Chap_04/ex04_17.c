#include <stdio.h>

int main(void)
{
	float f_num; // 4바이트 실수형 변수 선언
	f_num = 812.345F; // float형 상수 대입

	printf("float형 상수 출력 : 812.345F\n");
	printf("e 지수형으로 출력 : %e\n", f_num);
	printf("E 지수형으로 출력 : %E\n", f_num);
	return 0;
}