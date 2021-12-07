#include <stdio.h>

#define INPUT 2           // 다중 조건문에서 찾기 위한 기호 상수 선언

int main(void)
{
	int num;

	printf(" 숫자 1, 2, 3의 중 하나를 입력하시오. \n");
	printf(" 숫자 입력 : ");
	scanf_s("%d", &num);

	if (num == INPUT)
	{
      #if INPUT == 1
		printf(" 찾았습니다. 매크로 상수 : INPUT %d \n", num);

      #elif INPUT == 2
		printf(" 찾았습니다. 매크로 상수 : INPUT %d \n", num);

      #elif INPUT == 3
		printf("  찾았습니다. 매크로 상수 : INPUT %d \n", num);

      #else
		printf(" 프로그램을 종료합니다. \n");
      #endif
	}
	else if (num > 3 || num <= 0)
		printf(" 유효한 숫자가 아닙니다. \n");
	else
		printf(" 매크로 상수를 찾지 못했습니다. \n");
	return 0;
}