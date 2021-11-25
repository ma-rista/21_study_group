#include <stdio.h>

int main(void)
{
	int cnt;
	char* dept[] = { "서울", "부산", "대구", "광주", "제주" };
	printf("신청 가능한 근무 지역 \n");
	for (cnt = 0; cnt < 4; cnt++)
		printf(" %c지역 : %s\n", 65 + cnt, dept[cnt]);
	return 0;
}