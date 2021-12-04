#include <stdio.h>

int main(void)
{
	char ch; // 문자형 변수 선언 
	int num1; // 정수형 변수 선언
	float num2; // 실수형 변수 선언

	ch = 'A' + 5; // 문자형 변수는 정수형으로 자동 변환
	num1 = 3 + 7.8; // 정수형과 실수형 연산이지만 값은 정수형으로 대입
	num2 = 5 / 3.0; // 정수와 실수 연산은 실수형으로 자료형 자동 변환 

	printf("char ch = \'A\' + 5\n");
	printf("덧셈 연산 결과(문자) : %c\n", ch);
	printf("덧셈 연산 결과(정수형) : %d\n", ch);
	printf("int num1 = 3 + 7.8\n");
	printf("덧셈 연산 결과 : %d\n", num1);
	printf("float num2 = 5 / 3.0\n");
	printf("나눗셈 연산 결과 : %f\n", num2);
	return 0;
}