#include <stdio.h>

int main(void)
{
	int cnt, hap = 0, num;
	float avg;

#ifndef MAX          // 정의된 매크로가 없는 경우를 참으로 판단 
#define MAX 3        // 매크로 정의가 없으므로 매크로 정의
#endif

	for (cnt = 1; cnt <= MAX; cnt++)
	{
		printf(" >> %d번째 과목 점수 : ", cnt);
		scanf_s("%d", &num);
		hap += num;
	}

	avg = (float)hap / MAX;

	printf(" >> 총점 ....... [ %5d ] \n", hap);
	printf(" >> 평균 ....... [ %.2f ] \n", avg);
	return 0;
}