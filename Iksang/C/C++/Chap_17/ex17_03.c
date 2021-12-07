#include <stdio.h>

#define S 1            // 매크로 상수 정의
#define E 100

int main(void)
{
	int cnt, hap = 0;

	for (cnt = S; cnt <= E; cnt += 2)
		hap += cnt;

	printf(" %d부터 %d까지 홀수의 합 : %d\n", S, E, hap);
	return 0;
}