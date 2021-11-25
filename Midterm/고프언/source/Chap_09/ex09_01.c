#include <stdio.h>

int main(void)
{
	int cnt; // main( ) 함수 안에 지역 변수 선언

	printf("1부터 10까지 누적 합계 출력 \n");

	for (cnt = 1; cnt <= 10; cnt++)
	{
		int sum = 0; // for 문 안에 지역 변수 선언
		sum += cnt;
	}

	printf("1부터 10까지 누적 합계 : %d\n", sum); // 문법 오류 발생
	return 0;
}