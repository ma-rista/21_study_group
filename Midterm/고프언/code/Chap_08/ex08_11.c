#include <stdio.h>

void NE(); // 문장을 출력하는 사용자 정의 함수 선언
void D_Dash(); // ‘=’를 출력하는 사용자 정의 함수 선언
void Dash(); // ‘-’를 출력하는 사용자 정의 함수 선언

int main(void) // main( ) 함수 정의
{
	printf("매개변수와 반환값이 모두 없는 함수 타입 \n");

	Dash(); // 사용자 정의 함수 Dash( ) 호출
	printf("사용자 정의 함수 NE()를 호출합니다. \n");
	Dash(); // 사용자 정의 함수 Dash( ) 호출

	NE(); // 사용자 정의 함수 NE( ) 호출
	D_Dash(); // 사용자 정의 함수 D_Dash( ) 호출
	printf("프로그램을 종료합니다. \n");
	D_Dash(); // 사용자 정의 함수 D_Dash( ) 호출

	return 0;
}

void NE() // 사용자 정의 함수 NE( ) 정의
{
	printf(" \n[사용자 정의 함수 NE() 영역] \n\n");
}

void D_Dash() // 사용자 정의 함수 D_Dash( ) 정의
{
	printf("============================= \n");
}

void Dash() // 사용자 정의 함수 Dash( ) 정의
{
	printf("---------------------------------------- \n");
}