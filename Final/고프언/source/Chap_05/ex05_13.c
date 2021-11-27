#include <stdio.h>

int main(void)
{
	int varsize = 8;

	printf("정수형 변수 int varsize = 8 선언 \n");
	printf("1.변수 varsize 크기 : %d바이트 \n", sizeof(varsize));
	printf("2.자료형 char 크기 : %d바이트 \n", sizeof(char));
	printf("3.자료형 short 크기 : %d바이트 \n", sizeof(short));
	printf("4.자료형 int 크기 : %d바이트 \n", sizeof(int));
	printf("5.자료형 float 크기 : %d바이트 \n", sizeof(float));
	printf("6.자료형 double 크기 : %d바이트 \n", sizeof(double));
	return 0;
}