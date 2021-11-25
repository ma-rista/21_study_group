#include <stdio.h>

int main(void)
{
	int a, b, c, min;
	char choice;

	do {
		printf(" >> 3개의 정수 입력(구분자는 콤마 사용) : ");
		scanf_s("%d,%d,%d", &a, &b, &c);

		min = (a < b) ? a : b;
		min = (min < c) ? min : c;

		printf("\n >> 키보드로 입력한 3개의 정수는 %d, %d, %d 이며 \n", a, b, c);
		printf(" >> 그 중에서 최소값은 ....... [ %d ] \n", min);
		getchar();

	re:
		printf("\n >> 프로그램 다시 실행?(Y/N) : ");
		scanf_s("%c", &choice);

		if (choice == 'Y' || choice == 'y')
			continue;
		else if (choice == 'N' || choice == 'n')
			break;
		else
		{
			getchar();
			printf(" >> 입력 문자 오류 !! \n");
			goto re;
		}
	} while (1);
	printf("\n >> 프로그램을 종료합니다. \n");
	return 0;
}