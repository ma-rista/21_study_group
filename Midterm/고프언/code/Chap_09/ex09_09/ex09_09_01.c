#include <stdio.h>

// extern void A_Fun(); 
extern void B_Fun();

int main(void)
{
	printf("문> extern 키워드로 외부 함수 2개 모두 호출 \n");

	// A_Fun(); 

	printf("답1> \n");
	printf("static void A_Fun( ) 함수 호출 실패 \n");

	B_Fun(); // 외부 함수 호출됨

	printf("void B_Fun( ) 함수 호출 성공 \n");
	return 0;
}