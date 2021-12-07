#include <stdio.h>

int main(void)
{
	int input, year;

	printf("윤년이면 1, 평년이면 0 출력 \n");

	printf("연도 입력 : ____ \b\b\b\b\b");
	scanf_s("%d", &input);

	year = ((input % 4 == 0) && !(input % 100 == 0)) || (input % 400 == 0);

	printf("입력한 %d년은 %d에 해당합니다. \n ", input, year);
	return 0;
}