#include <stdio.h>

int main(void)
{
	int num1, num2, hap, cha, gob, div, nam;
	num1 = 25;
	num2 = 2;

	hap = num1 + num2;
	cha = num1 - num2;
	gob = num1 * num2;
	div = num1 / num2;
	nam = num1 % num2; // 나머지값 산출

	printf("1.덧셈 : 25 + 2 = %d\n", hap);
	printf("2.뺄셈 : 25 - 2 = %d\n", cha);
	printf("3.곱셈 : 25 * 2 = %d\n", gob);
	printf("4.나눗셈 : 25 / 2 = %d\n", div);
	printf("5.나머지값 : 25 %% 2 = %d\n", nam);
	return 0;
}