#include <stdio.h>
#define PI 3.141592 // 기호 상수 선언

int main(void)
{
	float r, area = 0; // 실수형 변수 선언

	printf("기호 상수 PI : 3.141592\n");
	printf("원의 넓이 = π * 반지름 * 반지름 \n");

	printf("반지름 입력(cm) : ");
	scanf_s("%f", &r);
	area = PI * r * r; // 원의 넓이 계산 

	printf("반지름 %fcm인 원의 넓이는 %f㎠ \n", r, area);
	return 0;
}