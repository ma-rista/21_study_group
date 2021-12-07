#include <stdio.h>
#include <conio.h> // _getch( )와 _putch( ) 함수 사용하기 위한 선언

int main(void)
{
	int munja; // 정수형 변수 선언

	printf("1.getch( ) 함수 사용 \n");
	printf("문자 입력 : ");
	munja = _getch(); // 에코 기능 없는 직접형 단일 문자 입력 함수

	printf(" \n문자 출력 : ");
	_putch(munja); // 직접형 단일 문자 출력 함수

	printf(" \n\n2._getche( ) 함수 사용 \n");
	printf("문자 입력 : ");
	munja = _getche(); // 에코 기능 있는 직접형 단일 문자 입력 함수

	printf(" \n문자 출력 : ");
	_putch(munja); // 직접형 단일 문자 출력 함수
	return 0;
}