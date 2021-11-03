#include <stdio.h>

int main(void)
{
	int cnt;
	char s[4][7] = {
	"Spring",
	"Summer",
	"Fall",
	"Winter"
	};

	printf("사계절을 for 문으로 출력 \n");

	for (cnt = 0; cnt < 4; cnt++)
		printf("%02d번째 계절 : %s\n", cnt + 1, s[cnt]);

	return 0;
}