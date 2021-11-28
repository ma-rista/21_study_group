#include <stdio.h>

int main(void)
{
	int a = 8; // 정수형 변수의 선언과 초기화
	int* pa = NULL; // 포인터를 초기화하지 않을 경우 가비지값 발생 우려
	// NULL의 주소값은 stdio.h 헤더 파일에서 0번지로 지정
	pa = &a; // 포인터에 일반 변수 a의 주소값 대입하여 초기화

	float b = 3.75; // 실수형 변수의 선언과 초기화
	float* pb = &b; // 실수형 포인터에 일반 변수 b의 주소값 대입하여 초기화

	printf("일반 변수 a의 값 : %u\n", a);
	printf("일반 변수 a의 주소값 : %u\n", &a);
	printf("포인터 pa의 주소값 : %u\n\n", pa);

	printf("일반 변수 b의 값 : %.2f\n", b);
	printf("일반 변수 b의 주소값 : %u\n", &b);
	printf("포인터 pb의 주소값 : %u\n\n", pb);

	printf("NULL의 주소값 : %u\n", NULL);

	return 0;
}