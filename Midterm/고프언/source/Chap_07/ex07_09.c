#include <stdio.h>

int main(void)
{
	int cnt, star; // cnt : 행을 바꿀 변수, star : *를 출력할 개수 설정

	for (cnt = 1; cnt <= 5; cnt++)
	{
		printf("%d행 : ", cnt);
		for (star = 5; star >= cnt; star--) // *의 개수 출력
			printf("*");

		printf(" \n");
	}
	return 0;
}