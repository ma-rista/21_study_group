#include <stdio.h>

static void A_Fun() // 함수명 앞에 static 키워드 선언
{
	printf("답1> A_Fun( ) 함수 호출 \n");
}

void B_Fun() // 함수명 앞에 static 키워드 선언하지 않음
{
	printf("답2> B_Fun( ) 함수 호출 \n");
}