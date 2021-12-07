#include <stdio.h>

int main(void)
{
	int jumsu, mok;
	char grade;

	printf("A학점 : 90점 이상 100점 이하 \n");
	printf("B학점 : 80점 이상 90점 미만 \n");
	printf("C학점 : 70점 이상 80점 미만 \n");
	printf("D학점 : 60점 이상 70점 미만 \n");
	printf("F학점 : 0점 이상 60점 미만 \n");
	printf("점수 입력 : ");
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0)
	{
		printf("입력한 점수는 허용 구간이 아닙니다. \n");
		printf("프로그램을 다시 실행하세요. \n");
	}
	else
	{
		mok = jumsu / 10;

		switch (mok)
		{
		case 10:
		case 9:
			grade = 'A';
			break;

		case 8:
			grade = 'B';
			break;

		case 7:
			grade = 'C';
			break;

		case 6:
			grade = 'D';
			break;

		default:
			grade = 'F';
			break;
		}
		printf("등급 : %c학점 \n", grade);
	}
	return 0;
}