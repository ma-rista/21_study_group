#include <stdio.h>

#define PI 3.141592            // 매크로 상수 정의
#define AREA PI * r * r        // 매크로 확장이 두 번 발생

int main(void)
{
	float r;     // 변수 반드시 r을 사용해야 함(매크로 상수 정의)

	printf(" 반지름 입력 : ");
	scanf_s("%f", &r);

	printf(" 원의 넓이 : %f\n", AREA);
	return 0;
}