#include <stdio.h>
#include <stdlib.h> // 수치 변환 함수를 사용하기 위한 헤더 파일

int main(void)
{
	char* chs; // 문자열을 입력할 포인터 변수 선언
	int str1;
	double str2;

	chs = "12345"; // 주어진 문자열
	str1 = atoi(chs); // 문자열을 정수형 int로 변환
	printf(" \"12345\" → 정수형 int로 변환 : %d\n", str1);

	chs = "12a34"; // 주어진 문자열
	str1 = atol(chs); // 문자열을 정수형 long으로 변환
	printf(" \"12a34\" → 정수형 long으로 변환 : %d\n", str1);

	chs = "12.345"; // 주어진 문자열
	str2 = atof(chs); // 문자열을 실수형 float으로 변환
	printf(" \"12.345\" → 실수형 float으로 변환 : %f\n", str2);

	chs = "a12.34"; // 주어진 문자열
	str2 = atof(chs); // 문자열을 실수형 float으로 변환
	printf(" \"a12.34\" → 실수형 float으로 변환 : %f\n", str2);
	return 0;
}