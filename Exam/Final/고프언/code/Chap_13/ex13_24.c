#include <stdio.h>

int main(void)
{
	int cnt;
	char s[3][20]; // 과목 개수를 3, 과목별 문자열 크기를 20으로 선언 

	printf("3개 수강 신청 과목 입력 \n");

	for (cnt = 0; cnt < 3; cnt++)
	{
		printf("%02d번째 과목 입력 : ", cnt + 1);
		scanf_s("%s", s[cnt], 20); // [열] 크기만큼 설정
	}

	printf(" \n3개 수강 신청 과목 출력 \n");

	for (cnt = 0; cnt < 3; cnt++)
		printf("%02d번째 과목 출력 : %s\n", cnt + 1, s[cnt]);

	return 0;
}