#include <stdio.h>

int main(void)
{
	int cnt, sum = 0;

	printf("1부터 10까지 누적 합계 출력 \n");

	for (cnt = 1; cnt <= 10; cnt++)
	{
		sum += cnt; // 누적 합계 산출
		printf("1부터 %d까지 누적 합계 : %d\n", cnt, sum);
	}
	return 0;
}