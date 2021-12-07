#include <stdio.h>

int main(void)
{
	unsigned int un_num = 12345U; // 부호가 없는 10진수 상수값 대입
	long lg_num = 1234567890L; // long형 10진수 상수값 대입

	printf("부호가 없는 10진수 상수값 대입 : 12345U\n");
	printf("long형 10진수 상수값 대입 : 1234567890L\n");
	printf("부호가 없는 상수값을 10진수로 출력 : %u\n", un_num);
	printf("long형 상수값을 10진수로 출력 : %ld\n", lg_num);
	printf("부호가 없는 상수값을 8진수로 출력 : %o\n", un_num);
	printf("long형 상수값을 8진수로 출력 : %o\n", lg_num);
	printf("부호가 없는 상수값을 16진수로 출력: %X\n", un_num);
	printf("long형 상수값을 16진수로 출력 : %X\n", lg_num);
	return 0;
}