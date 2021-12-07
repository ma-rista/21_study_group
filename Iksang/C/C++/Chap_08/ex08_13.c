#include <stdio.h>

char Alpha(); // 값을 입력받아 전달하는 사용자 정의 함수 선언

int main(void) // main( ) 함수 정의
{
	char show;
	printf("사용자 정의 함수에서 입력한 알파벳 전달 \n");

	show = Alpha(); // 사용자 정의 함수 호출
	printf(" \n[main ( ) 함수 영역] \n\n");
	printf("답> 전달받은 알파벳 : %c\n", show);
	printf("답> 아스키코드값 : %d\n", show);
	return 0;
}

char Alpha() // 사용자 정의 함수 정의
{
	char ch;
	printf(" \n[Alpha ( ) 함수 영역] \n\n");
	printf("문> 알파벳 입력 : ");
	scanf_s("%c", &ch, sizeof(ch));
	return ch;
}