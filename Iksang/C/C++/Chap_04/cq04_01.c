#include <stdio.h>

int main(void)
{
	int of, df;

	of = 32767 + 10;
	df = -32768 - 10;

	printf("오버플로 해결 : %d\n", of);
	printf("언더플로 해결 : %d\n", df);

	return 0;
}