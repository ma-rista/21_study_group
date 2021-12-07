#include <stdio.h>

int main(void)
{
	int dc_num = 123; // 10진수 상수 대입
	int oc_num = 0123; // 8진수 상수 대입
	int hx_num = 0x123; // 16진수 상수 대입

	printf("10진수 상수 : %d\n", dc_num);
	printf("8진수 상수 : %#o\n", oc_num);
	printf("16진수 상수 : %#x\n", hx_num);
	printf("10진수 123을 10진수로 출력 : %d\n", dc_num);
	printf("8진수 0123을 10진수로 출력 : %d\n", oc_num);
	printf("16진수 0x123을 10진수로 출력 : %d\n", hx_num);
	printf("10진수 123을 8진수로 출력 : %o\n", dc_num);
	printf("8진수 0123을 8진수로 출력 : %o\n", oc_num);
	printf("16진수 0x123을 8진수로 출력 : %o\n", hx_num);
	printf("10진수 123을 16진수로 출력 : %x\n", dc_num);
	printf("8진수 0123을 16진수로 출력 : %x\n", oc_num);
	printf("16진수 0x123을 16진수로 출력 : %x\n", hx_num);
	return 0;
}
