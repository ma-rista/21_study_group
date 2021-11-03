#include <stdio.h>

int main(void)
{
	int result = 10, num = 20;

	result *= num - 5; // result = result * (num - 5)

	printf("문> result *= num - 5\n");
	printf("답> %d\n", result);
	return 0;
}