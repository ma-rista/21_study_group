#include <stdio.h>
#define YD 1.093613

int main(void)
{
	int input;
	float swap;

	printf(" >> �Ÿ� �Է�(m) : ");
	scanf_s("%d", &input);

	swap = input * YD;

	printf("--------------------------------\n");
	printf(" >> �Է��� �Ÿ� : %d m \n", input);
	printf(" >> ȯ���� �Ÿ� : %f yd \n", swap);

	return 0;
}