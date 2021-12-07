#include <stdio.h>

int Call_val(int su); // 사용자 정의 함수 선언

int main(void)
{
	int num = 100, after;

	printf("[main( ) 함수 영역] \n");
	printf("전> 함수 호출하기 전의 값 : %d\n\n", num);

	after = Call_val(num); // 값에 의한 사용자 정의 함수 호출

	printf("[main( ) 함수 영역] \n");
	printf("후> 함수 호출 후의 값 : %d\n\n", after);
	return 0;
}

int Call_val(int su) // 사용자 정의 함수 정의
{
	printf("[Call_val( ) 함수 영역] \n");
	printf("수행> 전달받은 값 100에 5를 더하여 반환 \n\n");

	su += 5; // su = su + 5
	return su;
}