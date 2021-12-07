#include <stdio.h>

int main(void)
{
	int num = 23; // 정수형 변수 num을 선언하고 23으로 초기화 
	int* p; // 포인터 변수 p 선언 
	p = &num; // 포인터 변수 p에 일반 변수 num의 주소값 대입 

	printf("일반 변수 num의 값 : %u\n", num);
	printf("일반 변수 num의 주소값 : %u\n", &num);
	printf("포인터 p의 주소값 : %u\n", p);

	return 0;
}