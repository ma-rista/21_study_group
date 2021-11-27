#include <stdio.h>

int main(void)
{
	int i_num = 3;
	char ch = 'A';
	float f_num = 21.5;

	printf("자료형별 주소를 10진수로 출력 \n");
	printf("1.int형 변수의 주소 : %u\n", &i_num);
	printf("2.char형 변수의 주소 : %u\n", &ch);
	printf("3.float형 변수의 주소 : %u\n", &f_num);

	printf(" \n자료형별 주소를 16진수로 출력 \n");
	printf("1.int형 변수의 주소 : %X\n", &i_num);
	printf("2.char형 변수의 주소 : %X\n", &ch);
	printf("3.float형 변수의 주소 : %X\n", &f_num);

	return 0;
}