#include <stdio.h>

int main(void)
{
	int num1, num2, hap, cha, gob;
	double na;
	char op;

	printf("정수 2개와 연산자 입력(예> 8 + 5) : ");

	scanf_s("%d %c %d", &num1, &op, sizeof(op), &num2);

	switch (op)
	{
	case '+':
		hap = num1 + num2;
		printf("%d %c %d = %d\n", num1, op, num2, hap);
		break;

	case '-':
		cha = num1 - num2;
		printf("%d %c %d = %d\n", num1, op, num2, cha);
		break;

	case '*':
		gob = num1 * num2;
		printf("%d %c %d = %d\n", num1, op, num2, gob);
		break;

	case '/':
		na = (float)num1 / num2;
		printf("%d %c %d = %f\n", num1, op, num2, na);
		break;

	default:
		printf("%d %c %d 연산은 허용하지 않습니다. \n", num1, op, num2);
		printf("프로그램을 다시 시작하세요. \n");
		break;
	}
	return 0;
}