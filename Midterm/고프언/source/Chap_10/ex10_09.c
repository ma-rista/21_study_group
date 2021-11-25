#include <stdio.h>
#define DT 5 // 배열의 크기
int gob(int ta); // 사용자 정의 함수 선언

int main(void)
{
	int su[DT] = { 1, 2, 3, 4, 5 };
	int result;

	printf("배열> su[DT] = {1, 2, 3, 4, 5} \n");
	printf("전달> su[3] = %d --> 배열 요소 복사본 전달 \n", su[3]);

	result = gob(su[3]);

	printf("반환> gob(su[3]) 호출 결과 반환 : %d\n", result);
	printf("배열확인> su[3] 저장 값 : %d \n", su[3]);
	return 0;
}

int gob(int ta) // 사용자 정의 함수 정의
{
	int mul;

	mul = ta * ta;

	printf(" \n사용자 정의 함수 gob( ) 호출 \n");
	printf("산출> su[3] 배열 요소의 제곱 : %d * %d = %d\n", ta, ta, mul);

	return mul;
}