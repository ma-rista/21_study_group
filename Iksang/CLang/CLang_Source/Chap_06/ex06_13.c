#include <stdio.h>

int main(void)
{
	int year, month, day;

	printf("연도와 월 입력(예> 2035 08) : ");
	scanf_s("%d %d", &year, &month);

	if (month > 12 || month < 1)
	{
		printf("%d월은 허용하지 않는 숫자입니다. \n", month);
		printf("프로그램을 다시 시작하세요. \n");
	}
	else
	{
		switch (month)
		{
		case 2:
			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
			{
				printf("윤년");
				day = 29;
			}
			else
			{
				printf("평년");
				day = 28;
			}
			break;

		case 4: case 6: case 9: case 11:
			printf("평년");
			day = 30;
			break;

		default:
			printf("평년");
			day = 31;
		}
		printf(" : %d년 %02d월은 %d일까지 있습니다. \n", year, month, day);
	}
	return 0;
}