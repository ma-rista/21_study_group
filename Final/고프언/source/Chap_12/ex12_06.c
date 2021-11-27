#include <stdio.h>

void menu(void); // 사용자 정의 함수 선언
int hap(int a, int b);
int cha(int a, int b);
int gob(int a, int b);
int na(int a, int b);

void menu(void)
{
	int size, cnt;
	char* ma[] = { "덧셈", "뺄셈", "곱셈", "나눗셈", "종료" };
	size = sizeof(ma) / sizeof(ma[0]); // 배열 요소의 개수 산출
	for (cnt = 0; cnt < size; cnt++)
		printf("%d.%s \n", cnt, ma[cnt]);
}

int main(void)
{
	int choice, result, a, b;
	int(*fp[4])(int, int) = { hap, cha, gob, na };// 함수 포인터의 배열 선언
	while (1)
	{
		menu(); // 사용자 정의 함수 호출
	re:
		printf("선택(0 ~ 4) : ");
		scanf_s("%d", &choice);
		if (choice < 0 || choice > 4)
		{
			printf(" \n입력 오류 \n");
			printf("다시 선택하세요. \n");
			goto re;
		}
		else if (choice == 4)
			break;
		else
		{
			printf("정수 2개 입력(예> 10 20) : ");
			scanf_s("%d %d", &a, &b);
			result = fp[choice](a, b); // 함수 포인터 배열로 선택한 함수 호출
			printf("연산 결과 : %d\n", result);
		}
		printf("프로그램 수행 완료 \n");
	}
	printf(" \n프로그램 종료 \n");
	return 0;
}

int hap(int a, int b)
{
	int result;
	printf(" \n[덧셈 hap( ) 함수 영역] \n\n");
	result = a + b;
	return result;
}

int cha(int a, int b)
{
	int result;
	printf(" \n[뺄셈 cha( ) 함수 영역] \n\n");
	result = a - b; 
	return result;
}

int gob(int a, int b)
{
	int result;
	printf("\n[곱셈 gob( ) 함수 영역]\n\n");
	result = a * b;
	return result;
}

int na(int a, int b)
{
	int result;
	printf("\n[나눗셈 na( ) 함수 영역]\n\n");
	result = a / b;
	return result;
}