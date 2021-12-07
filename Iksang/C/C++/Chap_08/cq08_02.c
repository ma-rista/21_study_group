#include <stdio.h>
#include <stdlib.h> //system( ) 함수를 사용하기 위한 헤더 파일
#include <conio.h>

int main(void)
{
	system("title 함수 사용 프로그램"); //실행 결과 화면에 타이틀 출력
	system("dir");  // 현재 디렉터리의 정보 출력

	printf("문자 입력: ");
	_getch();  // 문자를 입력하는 단일 문자 함수

	system("cls");  // 화면을 모두 지움
	return 0;
}