#include <stdio.h>

int main(void)
{
	int cnt;

	printf("1부터 10까지 누적 합계 출력 \n");

	for (cnt = 1; cnt <= 10; cnt++)
	{
		int sum = 0; // 지역 변수 sum 생성
		sum += cnt; // 누적 합계가 산출되지 않는 논리 오류 발생
		printf("1부터 %d까지 누적 합계 : %d\n", cnt, sum);
	} // 지역 변수 sum 소멸
	return 0;
}