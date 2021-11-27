#include <stdio.h>
#include <stdlib.h> // rand( ) 함수를 사용하기 위한 헤더 파일
#include <time.h> // time( ) 함수를 사용하기 위한 헤더 파일

#define NUM 45

int main(void)
{
	int cnt;

	printf("1~45 중에서 숫자 6개 출력 \n");
	srand((unsigned)time(NULL)); // 시간 차별화 

	printf("srand( ) 출력 : ");
	for (cnt = 1; cnt <= 6; cnt++)
		printf(" %d ", 1 + (rand() % NUM)); // 1~45 사이의 값 출력

	printf(" \n");
	return 0;
}