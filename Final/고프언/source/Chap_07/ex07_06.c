#include <stdio.h>

int main(void)
{
	int dan, cnt, gob; // 입력받을 변수, 카운트 변수, 곱셈 저장 변수

replay:
	printf("알고 싶은 구구단(2~99) 입력 : ");
	scanf_s("%d", &dan);

	if (dan >= 100 || dan < 2) { // 구구단 범위는 2~99까지만 허용
		printf("허용하는 구구단 범위가 아닙니다. \n");
		printf("프로그램을 다시 실행하십시오. \n");
		goto replay;
	}
	else {
		for (cnt = 1; cnt <= 9; cnt++) {
			gob = dan * cnt; // 구구단 계산
			printf("%d x %d = %d\n", dan, cnt, gob);
		}
		printf("%d단을 출력하였습니다. \n", dan);
	}
	return 0;
}