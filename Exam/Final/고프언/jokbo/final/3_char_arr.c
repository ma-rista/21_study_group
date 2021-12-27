#include <stdio.h>

int main(void)
{
	int cnt, size, choice;
	char* task[] = {
	"Name",
	"Phone",
	"Address",
	"ID"
	};

	printf("포인터 배열의 요소 선택(종료 : 5)\n");

	size = sizeof(task) / sizeof(task[0]);

	for (cnt = 0; cnt < size; cnt++) 
		printf("%d.%s\n", cnt + 1, task[cnt]);

	while (1)
	{
		printf("\n숫자 입력(1 ~ 5) : ");
		scanf("%d", &choice);
		if (choice < 1 || choice > 5)
		{
			printf("입력 숫자 오류!\n");
			continue;
		}
		else if (choice == 5)
			break;
		else
			printf("선택한 단어는 \"%s\"입니다.\n", task[choice - 1]);
	}
	return 0;
}