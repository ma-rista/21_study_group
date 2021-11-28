#include <stdio.h>
#include <windows.h> // Sleep() 함수를 사용하기 위한 헤더 파일
#include <stdlib.h> // system() 함수를 사용하기 위한 헤더 파일

int main(void)
{
	system("title system() 함수 사용 프로그램");

	printf("현재 프로그램이 존재하는 디렉터리 정보 출력 \n");

	system("dir"); // 현재 디렉터리 정보 출력
	printf(" \n이 프로그램은 10초 후 종료됩니다. \n");

	Sleep(10000); // 10초 동안 지연 시간 설정
	system("cls"); // 화면을 모두 지움 
	return 0;
}