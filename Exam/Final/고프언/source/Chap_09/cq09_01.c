#include <stdio.h>

int A; // 전역 변수 선언
static int B; // 정적 전역 변수 선언

void In_Fun(void); // 정적 전역 변수 사용한 사용자 정의 함수 선언
extern void Out_Fun(void); // 외부 파일 사용자 정의 함수 선언

int main(void)
{
	Out_Fun(); // 외부 함수 호출

	In_Fun(); // 내부 함수 호출

	return 0;
}

void In_Fun(void) // 정적 전역 변수 사용한 사용자 정의 함수 정의
{
	B = 20;
	printf(" \n[내부 In_Fun( ) 함수 영역] \n");
}