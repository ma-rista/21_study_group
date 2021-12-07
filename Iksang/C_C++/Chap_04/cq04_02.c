#include <stdio.h>

int main(void)
{
	char input[10];

	printf("문자열 입력 : ");
	scanf_s("%s", input, sizeof(input));

	printf("입력한 문자열 출력 : %s\n", input);
	printf("문자열 상수가 저장된 주소 : %d\n", &input);

	return 0;
}