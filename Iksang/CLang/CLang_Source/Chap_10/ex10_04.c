#include <stdio.h>

int main(void)
{
	int point[] = { 23, 35, 2, 9, 75, 96, 82, 16, 48, 85, 33, 67, 95, 37 };
	int count;

	printf("point[] = {23, 35, 2, 9, 75, 96, 82, 16, 48, 85, 33, 67, 95, 37} \n\n");

	count = sizeof(point) / sizeof(point[0]); // 배열 요소의 개수 산출

	printf("point[] 배열 요소의 개수 : %d개 \n", count);
	return 0;
}