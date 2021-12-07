#include <stdio.h>
#define E 100

int main(void)
{
	int count = 1, hap = 0;

	do
	{
		if (hap > 2500)
			break;
		else
			hap += count;

		count++;

	} while (count <= E);
	printf("%d회 반복 후 누적 합계 : %d\n", count, hap);
	return 0;
}