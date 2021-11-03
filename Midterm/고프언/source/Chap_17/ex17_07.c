#include <stdio.h>

int main(void)
{
	int cnt, hap = 0, num;

#ifdef MULTI                            // 매크로가 정의되어 있으면 참으로 판단
	num = 3;
#else                                   // 매크로가 정의되어 있지 않은 경우 
	num = 5;
#endif

	for (cnt = 1; cnt <= 100; cnt++)
		if (cnt % num == 0)            // 배수를 구분
			hap += cnt;

	printf(" 1부터 100까지 %d의 배수 합은 %d\n", num, hap);
	return 0;
}