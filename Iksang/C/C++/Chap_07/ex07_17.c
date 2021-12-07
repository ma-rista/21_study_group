#include <stdio.h>

int main(void)
{
	char op; // 문자 변수 선언

	do {
	reset: // goto 문에서 사용할 레이블 이름
		printf("알파벳 대문자 입력 : ");
		scanf_s("%c", &op, sizeof(op));
		getchar(); // 버퍼 메모리에서 Enter 키값 제거

		if (op >= 'A' && op <= 'Z') // 알파벳 대문자 판별
		{
			printf("입력한 알파벳 %c는(은) 대문자가 맞습니다. \n", op);
			printf("수고하셨습니다. \n");
			break; // 반복문을 빠져나감
		}
		else
		{
			printf("입력한 알파벳 %c는(은) 대문자가 아닙니다. \n", op);
			printf("알파벳을 다시 입력하세요. \n");
			goto reset; // reset 레이블 위치로 강제 이동
		}
	} while (1);
	return 0;
}