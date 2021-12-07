#include <stdio.h>

int main(void)
{
	int a[2][4] = {
	{10, 20, 30, 0}, // 0은 배열 요소의 합계 저장 공간
	{40, 50, 60, 0} // 0은 배열 요소의 합계 저장 공간
	};
	int(*four)[4]; // 배열 포인터 four 선언(일반 포인터 변수는 오류 발생)
	int row, col;

	four = a; // 2차원 배열 a의 시작 주소를 포인터 변수에 대입
	printf("2차원 배열 요소와 행에 대한 합계 출력 \n");

	/* 배열 요소 3개의 합을 2차원 배열 요소의 네 번째 위치에 저장 */
	for (row = 0; row < 2; row++)
		for (col = 0; col < 3; col++)
			four[row][3] += four[row][col];

	/* 2차원 배열의 각 [행]별로 [열]을 합산한 값을 배열 a[행][3]에 출력 */
	for (row = 0; row < 2; row++)
	{
		printf("%d번째 행 배열 요소 출력 \n", row + 1);

		for (col = 0; col < 3; col++)
		{
			printf("[%d][%d] : ", row, col);
			printf("%d\t\n", four[row][col]);
		}
		printf("배열 요소 합계 : %d\n\n", four[row][3]);
	}
	return 0;
}