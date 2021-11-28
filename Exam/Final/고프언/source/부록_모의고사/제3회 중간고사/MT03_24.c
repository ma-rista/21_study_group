#include <stdio.h>

int main(void)
{
	int cnt, space, star;

	for (cnt = 1; cnt < 10; cnt += 3)
	{
		for (space = 1; space <= 8 - cnt; space++)
		{
			printf(" ");
		}
		for (star = 1; star <= cnt; star++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}