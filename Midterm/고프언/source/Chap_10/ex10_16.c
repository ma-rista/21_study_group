#include <stdio.h>
#define Y 3 // 연도수에 대한 배열 크기
#define P 5 // 제품수에 대한 배열 크기

int sum(int sale[Y][P]); // 사용자 정의 함수 선언

int main(void)
{
	int row, col, total = 0;
	int sale[Y][P] = {
	{2025, 353, 127, 83, 883},
	{2026, 387, 133, 89, 907},
	{2027, 439, 135, 92, 965} };

	printf("컴퓨터 \t모니터 \t키보드 \t마우스 \t소프트웨어 \n");

	for (row = 0; row < Y; row++) // 3년간 데이터 반복 수행
	{
		for (col = 0; col < P; col++) // 4개 품목 매출액 반복 수행
			printf("%d\t", sale[row][col]); // 모든 데이터 출력

		printf(" \n");
	}

	total = sum(sale); // 사용자 정의 함수 호출

	printf("3년간 총 매출액 : %d백만 원 \n", total);

	return 0;
}

int sum(const int sale[Y][P]) // 배열 요소 원본 값 보호하는 사용자 정의 함수 정의
{
	int a, b;
	int hap = 0;

	for (a = 0; a < Y; a++)
		for (b = 0; b < P; b++)
			hap += sale[a][b];

	return hap;
}      