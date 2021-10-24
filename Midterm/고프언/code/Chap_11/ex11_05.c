#include <stdio.h>

int main(void)
{
	int a = 103;
	int* pa = NULL; // NULL 값으로 포인터 초기화

	pa = &a;

	printf("int a = 103;\n");
	printf("int *pa = NULL;\n");
	printf("pa = &a;\n");

	if (pa != NULL)
	{
		printf("pa는 유효한 포인터\n");
		printf("1.포인터 pa의 주소값 : %u\n", pa);
		printf("2.포인터가 가리키는 *pa의 데이터값 : %u\n", *pa);
	}
	else
	{
		printf("소스 코드 08행을 /* pa = &a; */처럼 주석 처리한 경우\n");
		printf("pa는 유효하지 않은 포인터!\n");
	}
	return 0;
}