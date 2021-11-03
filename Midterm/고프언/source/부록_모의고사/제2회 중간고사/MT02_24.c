#include <stdio.h>
#define YD 1.093613

int main(void)
{
	int input;
	float swap;

	printf(" >> 거리 입력(m) : ");
	scanf_s("%d", &input);

	swap = input * YD;

	printf("--------------------------------\n");
	printf(" >> 입력한 거리 : %d m \n", input);
	printf(" >> 환산한 거리 : %f yd \n", swap);

	return 0;
}