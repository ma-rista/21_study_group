#include <stdio.h>

int main(void)
{
	int cnt;
	char *dept[] = { "컴퓨터", "노트북", "마우스", "키보드", "모니터" };

	printf(" >> 구입 희망 순위 \n");

	for (cnt = 0; cnt < 5; cnt++)
		printf("  %c 순위 : [ %s ] \n", 65 + cnt, dept[cnt]);

	return 0;
}