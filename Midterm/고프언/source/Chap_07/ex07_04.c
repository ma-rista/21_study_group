#include <stdio.h>

int main(void)
{
	int count, hap = 0; // 누적 합계를 저장할 변수는 반드시 0으로 초기화

	for (count = 1; count <= 10; count += 2)
	{
		hap += count; // hap = hap + count
		printf("%d까지 홀수의 누적합 출력 : hap = %d\n", count, hap);
	}
	printf("1 + 3 + ~ + 9 홀수의 누적합 = %d\n", hap);
	return 0;
}