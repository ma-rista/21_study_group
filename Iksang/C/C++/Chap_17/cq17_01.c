#include <stdio.h>

#define MAX 50         // 매크로 상수 정의

int main(void)
{
	int cnt, hap = 0;

	for (cnt = 1; cnt <= MAX; cnt++)
		hap += cnt;

	printf(" >> 1부터 %d까지의 합 .... [ %3d ] \n\n", MAX, hap);

#undef MAX            // 앞에서 선언한 매크로 취소
#define MAX 100       // 매크로 상수 재정의

	printf(" <<<<< 매크로 취소 후 재정의 >>>>> \n\n");

	hap = 0;
	for (cnt = 1; cnt <= MAX; cnt++)
		hap += cnt;

	printf(" >> 1부터 %d까지의 합 ... [ %3d ] \n", MAX, hap);
	return 0;
}