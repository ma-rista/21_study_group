#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title 정수형 데이터의 자릿수 지정 형식");

	printf("|%d|", 358);
	printf(": 정수형 기본 자릿수 \n");

	printf("|%5d|", 358);
	printf(": 전체 자릿수 5개 \n");

	printf("%|05d|", 358);
	printf(": 전체 자릿수는 5개이고 빈칸은 0으로 채움 \n");
	return 0;
}