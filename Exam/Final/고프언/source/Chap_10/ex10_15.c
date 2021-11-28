#include <stdio.h>
#define R 3 // 가로 좌표 개수에 대한 배열 크기 
#define C 3 // 세로 좌표 개수에 대한 배열 크기 

void grid(); // 게임판 출력 사용자 정의 함수 선언

int main(void)
{
	int tic[R][C];
	int row, col, p, g;

	printf("게임 실행 횟수 제한 : 총 9회 \n\n");
	grid();

	/*-- 게임판 초기화 --*/
	for (row = 0; row < R; row++)
		for (col = 0; col < C; col++)
			tic[row][col] = ' ';

	/*-- 사용자로부터 위치를 입력받아 게임판에 표시 --*/
	printf("게임 요령 -> 홀수 횟수와 짝수 횟수로 상대편 구분 \n");
	printf("[사용자 1] : 홀수 횟수 사용 \n");
	printf("[사용자 2] : 짝수 횟수 사용 \n");
	printf("[허용 범위] : 0 ~ 2까지만 허용! \n\n");

	for (p = 0; p < 9; p++)
	{
	re_play:
		printf("%d번째 입력 : ", p + 1);
		scanf_s("%d %d", &row, &col);

		if (row < 0 || row > 2 || col < 0 || col > 2)
		{
			printf("입력 오류! \n");
			printf("다시 입력하세요. \n\n");
			goto re_play;
		}
		tic[row][col] = (p % 2 == 0) ? 'O' : 'X';
	}
	printf("\n게임 결과\n");

	for (g = 0; g < R; g++)
	{
		printf("|---|---|---|\n");
		printf("| %c | %c | %c |\n", tic[g][0], tic[g][1], tic[g][2]);
	}
	printf("|---|---|---|\n\n");
	printf("총 %d회를 실행하였으므로 프로그램 종료\n", p);
	return 0;
}

/*-- 화면에 게임판을 출력하는 사용자 정의 함수 --*/
void grid()
{
	printf("|---|---|---|\n");
	printf("| 1 | 2 | 3 |\n");
	printf("|---|---|---|\n");
	printf("| 4 | 5 | 6 |\n");
	printf("|---|---|---|\n");
	printf("| 7 | 8 | 9 |\n");
	printf("|---|---|---|\n");
}