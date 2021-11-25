#include <stdio.h>

int main(void)
{
	int munja; // 정수형 변수 선언

	while (1)
	{
		if ((munja = getchar()) != EOF) // 입력받은 문자 비교
			putchar(munja); // 입력받은 문자 출력
		else
			break;
	}

	printf("EOF : %d\n", munja);

	return 0;
}