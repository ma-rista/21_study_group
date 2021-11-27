#include <stdio.h>

int main(void)
{
	int a; // double a로 선언하면 디버깅 오류 해결
	double* pd = NULL; // 포인터를 NULL 값으로 초기화

	pd = &a;
	*pd = 13.8;

	if (pd != NULL)
	{
		printf("pd는 유효한 포인터 \n");
		printf("1.포인터 pd의 주소값 : %u\n", pd);
		printf("2.포인터가 가리키는 *pd의 데이터값 : %u\n", *pd);
	}
	else
		printf("pd는 유효하지 않은 포인터 \n");

	return 0;
}