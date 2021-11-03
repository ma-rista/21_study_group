#include <stdio.h>
int main(void)
{
	int munja;
	do
	{
		printf("문자 입력 : ");
		if ((munja = getchar()) != EOF)
		{
			printf("입력한 문자 출력 : ");
			putchar(munja); // 입력받은 문자 출력
			getchar(); // 버퍼 메모리 비움
			printf(" \n\n");
		}
		else
			break;
	} while (1);
		return 0;
}