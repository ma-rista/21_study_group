#include <stdio.h>

void Insa(); // 문장을 출력하는 사용자 정의 함수 선언

int main(void) // main( ) 함수 정의
{
	printf("사용자 정의 함수를 호출합니다. \n");
	Insa(); // 사용자 정의 함수 호출
	return 0;
}

void Insa() // 사용자 정의 함수 정의
{
	printf(" \n[Insa ( ) 함수 영역] \n");
	printf(" \n오늘 하루도 행복하세요! \n");
}