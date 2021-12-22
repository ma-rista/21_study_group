#include <stdio.h>

int main()
{
	char op_type;
	int num1, num2;

	printf("첫 번째 정숫값 입력 : ");
	scanf("%d", &num1);
	rewind(stdin);

	printf("연산자 입력 (+, -, *, / 가능): ");
	scanf("%c", &op_type, 1);
	rewind(stdin);

	printf("두 번째 정숫값을 입력 : ");
	scanf("%d", &num2);

	if (op_type == '+'){
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
	}
	else if (op_type == '-'){
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
	}
	else if (op_type == '*'){
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
	}
	else if (op_type == '/'){
		if (num2 == 0) 
		printf ("오류 !! 0으로 나눌 수 없습니다");
		else printf("%d / %d = %.3f\n", num1 ,num2, num1 / (double)num2);
	}
	return 0;
}
