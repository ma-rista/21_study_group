#include <stdio.h>

void Exchange(float a); // 사용자 정의 함수 선언

int main(void) // main( ) 함수 정의
{
	float input;

	printf("인치(inch)를 센티미터(cm)로 환산 \n");
	printf("문> 인치 입력 : ");
	scanf_s("%f", &input);

	printf(" \n");
	Exchange(input); // 사용자 정의 함수 호출
	printf(" \n");
	return 0;
}

void Exchange(float a) // 사용자 정의 함수 정의
{
	float swap;
	swap = a * 2.5399;
	printf("[Exchange ( ) 함수 영역] \n\n");
	printf("답> 단위 환산 : %.2f inch는 %.2f cm \n", a, swap);
}