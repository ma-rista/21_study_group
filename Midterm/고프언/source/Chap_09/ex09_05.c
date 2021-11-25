#include <stdio.h>

int star = 7; // 전역 변수 선언

int main(void)
{
	int star = 8; // 지역 변수 선언

	printf("전역 변수 선언 : star = 7\n");
	printf("지역 변수 선언 : star = 8\n");
	printf("출력> star = %d\n", star);
	return 0;
}