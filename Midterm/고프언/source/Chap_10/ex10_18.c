#include <stdio.h>
#define P 2 // 면의 개수에 대한 배열 크기
#define R 3 // 행의 개수에 대한 배열 크기
#define C 5 // 열의 개수에 대한 배열 크기

int main(void)
{
	int pg, row, col; // 면, 행, 열의 변수
	int index[P][R][C] = {
	{{1, 2, 3, 4, 5},
	{6, 7, 8, 9, 10},
	{11, 12, 13, 14, 15}},
	{{16, 17, 18, 19, 20},
	{21, 22, 23, 24, 25},
	{26, 27, 28, 29, 30}} };

	for (pg = 0; pg < P; pg++) // 면 출력
	{
		printf("\n[%d면] 출력\n", pg + 1);

		for (row = 0; row < R; row++) // 행 출력
		{
			printf("%d행 출력 ... ", row + 1);
			for (col = 0; col < C; col++) // 열 출력
			{
				printf("%2d", index[pg][row][col]);
				printf("[%d][%d][%d] ", pg, row, col);
			}
			printf("\n"); // 열을 모두 출력하면 줄 바꿈
		}
	}
	return 0;
}