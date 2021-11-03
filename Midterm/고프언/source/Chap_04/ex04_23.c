#include <stdio.h>

int main(void)
{
	const float M = 3.305785; // 기호 상수 선언
	float flat, area = 0; // 실수형 변수 선언

	printf("기호 상수 M : 3.305785\n");
	printf("평방미터(㎡) = 평 * 3.305785\n");

	printf("평 입력 : ");
	scanf_s("%f", &flat);
	area = flat * M; // 평을 평방미터로 환산

	printf("입력한 %f평은 %f㎡ \n", flat, area);
	return 0;
}