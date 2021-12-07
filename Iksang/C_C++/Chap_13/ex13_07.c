#include <stdio.h>
#include <conio.h> // _getch( ) 함수 사용하기 위해 선언

int main(void)
{
	unsigned char op; // unsigned 표현 범위는 0~256

	printf("문자 입력 : ");
	op = _getch(); // 키보드로 문자 입력받아 변수 op에 저장

	while (op != ' \r')
	{
		printf(" \n입력한 문자 : %c\n", op);
		printf("아스키코드값 : %d\n", op);
		op = _getch(); // Enter를 입력하면 반복문 탈출
	}
	printf("프로그램 종료 \n");
	return 0;
}