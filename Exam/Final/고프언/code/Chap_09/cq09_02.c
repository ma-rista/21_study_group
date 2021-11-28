#include <stdio.h> 

extern int A; // extern 키워드로 외부에서 선언한 전역 변수 연결

void Out_Fun(void)
{
	A = 10;
	printf(" \n[Out_Fun( ) 함수 영역] \n");
}