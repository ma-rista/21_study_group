#include <stdio.h>

int Call_ref(int* su); // 사용자 정의 함수 선언

int main(void) // main( ) 함수 정의
{
	int num = 100, after;

	printf("[main( ) 함수 영역] \n");
	printf("전> 함수 호출하기 전의 값 : %d\n", num);
	printf("팁> 함수 호출 : 인수와 주소 참조 연산자 &를 함께 전달 \n\n");

	after = Call_ref(&num); // 주소에 의한 사용자 정의 함수 호출

	printf("[main( ) 함수 영역] \n");
	printf("후> 함수 호출 후의 값 : %d\n\n", after);
	return 0;
}

int Call_ref(int* su) // 사용자 정의 함수 정의
{
	printf("[Call_ref( ) 함수 영역] \n");
	printf("수행> 전달받은 주소에 저장된 값인 100 + 5 반환 \n\n");

	*su += 5; // *su = *su + 5
	return *su;
}