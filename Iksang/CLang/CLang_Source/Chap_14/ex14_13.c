#include <stdio.h>

typedef struct point {
	int a;
	int b;
} PS; // 새로운 자료형 PS 정의

PS blood(PS s1, PS s2); // 사용자 정의 함수 원형

int main(void)
{
	PS ms = { 130, 80 };
	PS fs = { 148, 95 };
	PS result;

	result = blood(ms, fs);
	printf("수축기 혈압 : %d\n", result.a);
	printf("이완기 혈압 : %d\n", result.b);
	return 0;
}

PS blood(PS s1, PS s2) // 사용자 정의 함수
{
	PS pulse;

	pulse.a = (s1.a + s2.a) / 2;
	pulse.b = (s1.b + s2.b) / 2;
	return pulse;
}