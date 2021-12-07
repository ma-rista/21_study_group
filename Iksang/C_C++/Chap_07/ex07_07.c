#include <stdio.h>

int main(void)
{
	int dan, cnt, gob; // 구구단 변수, 카운트 변수, 곱셈 저장 변수

	for (dan = 2; dan <= 9; dan++) // 2~9단 출력
	{
		for (cnt = 1; cnt <= 9; cnt++) // 곱해지는 수
		{
			gob = dan * cnt; // 구구단 계산
			printf("%d x %d = %d", dan, cnt, gob);
			printf(" : 바깥쪽 for 문 %d일 때, 안쪽 for 문은 %d\n", dan, cnt);
		}
		printf(" \n"); // 구구단 하나가 모두 출력되면 한 줄 띄움
	}
	return 0;
}