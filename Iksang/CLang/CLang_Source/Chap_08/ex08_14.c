#include <stdio.h>

int Sum(int su); // 사용자 정의 함수 선언

int main(void) // main( ) 함수 정의
{
	int input, result;

	printf("1부터 입력받은 수까지 누적 합계 산출 \n");
	printf("---------------------------------------------- \n");
	printf("메인 함수 역할 \n");
	printf("1.키보드로 정수값 입력받음 \n");
	printf("2.사용자 정의 함수 호출 \n");
	printf("3.입력받은 정수값을 사용자 정의 함수에 전달 \n");
	printf("4.사용자 정의 함수에서 전달받은 결과값 출력 \n");
	printf("---------------------------------------------- \n");
	printf("사용자 정의 함수 역할 \n");
	printf("1.메인 함수로부터 정수값 전달받음 \n");
	printf("2.for 문으로 누적 합계 산출 \n");
	printf("3.누적 합계를 메인 함수에 반환 \n");
	printf("---------------------------------------------- \n");
	printf("[main( ) 함수 영역] \n\n");
	printf("질문> 어디까지 누적합을 구할까요 : ");

	scanf_s("%d", &input);

	result = Sum(input); // 사용자 정의 함수 호출
	printf("[main( ) 함수 영역] \n\n");
	printf("결과> 1부터 %d까지 누적 합계 : %d\n", input, result);
	return 0;
}

int Sum(int su) // 사용자 정의 함수 정의
{
	int cnt, hap = 0;

	printf("[Sum( ) 함수 영역] \n\n");
	printf("수행> 1부터 %d까지 누적 합계 산출하여 반환 \n", su);

	for (cnt = 1; cnt <= su; cnt++)
		hap += cnt;

	return hap;
}