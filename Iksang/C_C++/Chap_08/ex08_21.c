#include <stdio.h>

int Sum(int cnt); // 사용자 정의 함수 선언

int main(void)
{
	int input, hap = 0;

	printf("[main( ) 함수 영역] \n");
	printf("전달> 어디까지 구할까요 : ");
	scanf_s("%d", &input);

	printf("호출> Sum( ) 함수 호출 \n\n");
	printf("[Sum( ) 함수 호출 완료] \n");

	hap = Sum(input); // 함수 호출하면서 input을 매개변수로 전달

	printf("동작> Sum( ) 함수에서 1부터 %d까지 누적 합계 산출 \n", input);
	printf("회신> main( ) 함수 반환 \n\n");
	printf("[main( ) 함수 영역] \n");
	printf("결과> 1부터 %d까지 누적 합계 : %d\n", input, hap);

	return 0;
}

int Sum(int cnt) // 사용자 정의 함수 정의
{
	if (cnt == 1) // 무한 루프 탈출 위한 필요조건
		return 1;
	else
		return(cnt + Sum(cnt - 1));
}