#include <stdio.h>

int main(void)
{
	int cnt, size, choice;
	char* task[] = {
	"Desk",
	"Computer",
	"Books",
	"USB",
	"EXIT"
	};

	printf("포인터 배열의 요소 선택(종료 : 5)\n");

	size = sizeof(task) / sizeof(task[0]); // 배열 요소의 개수 산출

	for (cnt = 0; cnt < size; cnt++) // 문자열 상수 출력
		printf("%d.%s\n", cnt + 1, task[cnt]);

	while (1)
	{
		printf("\n숫자 입력(1 ~ 5) : ");
		scanf_s("%d", &choice);
		if (choice < 1 || choice > 5)
		{
			printf("입력 숫자 오류!\n");
			continue;
		}
		else if (choice == 5)
			break;
		else // 입력한 숫자에 해당하는 배열 요소 매핑
			printf("선택한 단어는 \"%s\"입니다.\n", task[choice - 1]);
	}
	return 0;
}