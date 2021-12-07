#include <stdio.h>

int main(void)
{
	int cnt, hap = 0, num;

	printf(" 3개의 정수를 차례대로 입력하시오. \n");

#ifndef MAX          // 정의된 매크로가 없는 경우 참으로 판단 
#define MAX 3        // 매크로 정의가 없으므로 매크로 상수 정의
#endif

	for (cnt = 1; cnt <= MAX; cnt++)
	{
		printf(" %d번째 정수 : ", cnt);
		scanf_s("%d", &num);
		hap += num;
	}
	printf(" 3개 정수의 합은 %d\n", hap);
	return 0;
}