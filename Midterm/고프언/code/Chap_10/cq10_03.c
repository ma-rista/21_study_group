#include <stdio.h>

int main(void)
{
	int point[] = { 38, 96, 14, 27, 55 };
	int count;

	count = sizeof(point) / sizeof(point[0]); // 배열 요소의 개수 산출

	printf("point[] = {38, 96, 14, 27, 55} \n");
	printf("배열 요소의 개수 : %d개 \n", count);

	return 0;
}