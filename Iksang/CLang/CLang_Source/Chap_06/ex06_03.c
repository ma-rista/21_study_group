#include <stdio.h>

int main(void)
{
	int input_num;

	printf("정수 입력 : ");
	scanf_s("%d", &input_num);

	if (input_num > 0)
	{
		printf("입력한 정수 %d는(은) 양의 정수입니다. \n", input_num);
		printf("조건문은 참입니다. \n");
	}

	return 0;
}