#include <stdio.h>

int main(void)
{
	int su, cnt = 1, hap = 0; // 입력, 카운트, 누적합 변수

	printf("어디까지 합을 구할까요 : ");
	scanf_s("%d", &su);

	do {
		hap += cnt; // hap = hap + cnt
		printf("%d회 실행 : 누적합은 %d\n", cnt, hap);
		cnt++;
	} while (cnt <= su);

	printf("1부터 %d까지 누적합 : %d\n", su, hap);
	return 0;
}