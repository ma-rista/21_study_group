#include <stdio.h>

int main(void)
{
	int cnt, size, num1, num2;
	char choice;
	char* task[] = {
	'+',
	'-',
	'*',
	'/'
	};
	while (1)
	{
		printf("첫번째 숫자를 입력하세요 : ");
		scanf("%d", &num1);

		printf("연산자 입력(+, -, *, /) :");
		scanf(" %c", &choice);

		printf("두번째 숫자를 입력하세요 : ");
		scanf("%d", &num2);
		
		if (choice == '+')
		{
			printf("%d %c %d = %d\n", num1, task[0], num2, num1 + num2);
		}
		else if (choice == '-')
		{
			printf("%d %c %d = %d\n", num1, task[1],num2, num1 - num2);
		}
		else if (choice == '*')
		{
			printf("%d %c %d = %d\n", num1, task[2],num2, num1 * num2);
		}
		else // 입력한 숫자에 해당하는 배열 요소 매핑
			printf("%d %c %d = %d\n", num1, task[3], num2, num1 / num2);
		break;
	}
	return 0;
}