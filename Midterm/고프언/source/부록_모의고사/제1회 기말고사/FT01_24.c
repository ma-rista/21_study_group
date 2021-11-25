#include <stdio.h>

int main(void)
{
	char alpha[] = { 'A', 'B', 'C', 'D', 'E' };
	int count;

	count = sizeof(alpha) / sizeof(alpha[0]);  // 배열 요소의 개수 산출

	printf(" >> char alpha[] = { \'A\', \'B\', \'C\', \'D\', \'E\' } \n");
	printf(" >> 배열의 요소의 개수 ...  %d개 \n", count);

	return 0;
}