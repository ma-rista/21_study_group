#include <stdio.h>
#define MB 1024

int main(void)
{
	int input, gb;

	printf("GB(기가바이트) 단위로 데이터 입력 : ");
	scanf_s("%d", &input);
	gb = input * MB;

	printf("입력한 데이터 양 : %d GB \n", input);
	printf("환산한 데이터 양 : %d KB \n", gb);

	return 0;
}