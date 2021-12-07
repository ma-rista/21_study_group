#include <stdio.h>

void Start(); // 사용자 정의 함수 선언 

int main(void)
{
	printf("Start( ) 함수 3회 호출 결과 \n");
	Start(); // 사용자 정의 함수 호출
	Start();
	Start();

	return 0;
}

void Start() // 사용자 정의 함수 정의 
{
	static int s_cnt = 0; // 정적 변수 선언과 초기화
	int a_cnt = 0; // 동적 변수 선언과 초기화

	printf("정적 변수 = %d\t 동적 변수 = %d\n", s_cnt, a_cnt);
	s_cnt++;
	a_cnt++;
}