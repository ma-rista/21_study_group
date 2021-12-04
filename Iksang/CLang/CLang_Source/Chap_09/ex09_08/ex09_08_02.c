#include <stdio.h>

extern int A; // extern 키워드로 전역 변수를 외부와 연결

void Out_Fun(void) // 외부 함수
{
	A = 10;
	printf(" \n[외부 Out_Fun( ) 함수 영역] \n");
}