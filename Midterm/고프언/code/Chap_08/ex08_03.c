#include <stdio.h>
#include <math.h> // 수학 함수를 사용하기 위한 헤더 파일

int main(void)
{
	double result, target = 3.58; // double형으로 선언

	printf("double형 변수 target의 값 : 3.58\n");

	result = ceil(target); // 올림 함수 사용
	printf("올림 함수 ceil( ) 사용 결과 : %.2f\n", result);

	result = floor(target); // 내림 함수 사용 
	printf("내림 함수 floor( ) 사용 결과 : %.2f\n", result);
	return 0;
}