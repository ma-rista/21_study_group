#include <stdio.h>

int main(void)
{
	int jumsu;
	char grade;

	printf("점수 입력 : ");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90 && jumsu <= 100)
		grade = 'A';
	else if (jumsu >= 80 && jumsu < 90)
		grade = 'B';
	else if (jumsu >= 70 && jumsu < 80)
		grade = 'C';
	else if (jumsu >= 60 && jumsu < 70)
		grade = 'D';
	else if (jumsu >= 0 && jumsu < 60)
		grade = 'F';
	else
	{
		printf("점수 허용 구간(0~100)이 아닙니다. \n");
		printf("프로그램을 다시 시작하세요. \n");
		return 0;
	}

	printf("입력한 점수 : %d\n", jumsu);
	printf("점수 등급 : %c학점 \n", grade);
	return 0;
}