#include <stdio.h>
#include <stdlib.h> // system() 함수를 사용하기 위한 헤더 파일
#include <conio.h> // _getch() 함수를 사용하기 위한 헤더 파일

int main(void)
{
	system("title system() 함수 사용 프로그램"); // 실행 화면 타이틀 출력 

	printf("현재 프로그램이 존재하는 디렉터리 정보 출력 \n");

	system("dir"); // 현재 디렉터리 정보 출력
	printf(" \n\n아무 키나 누르면 프로그램이 종료됩니다. \n");
	printf("문자 입력 : ");

	_getch(); // 직접형 단일 문자 입력 함수
	system("cls"); // 화면을 모두 지움 
	return 0;
}