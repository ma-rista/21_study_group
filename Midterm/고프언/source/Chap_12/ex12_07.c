#include <stdio.h>

int main(void)
{
	const char* season[] = { "Spring", "Summer", "Fall", "Winter" };
	char c = 'F';
	char* pc, ** ppc;
	int cnt;

	pc = &c; // 변수 c의 시작 주소를 포인터 변수에 대입
	ppc = &pc; // 포인터 변수 pc의 시작 주소를 이중 포인터 변수에 대입

	printf("일반 변수 c : %c\n", c);
	printf("포인터 변수 *pc : %c\n", *pc);
	printf("이중 포인터 **ppc : %c\n", **ppc);

	ppc = season; // 포인터 배열의 시작 주소를 이중 포인터 변수에 대입

	printf(" \n");
	printf("char *season[ ] = { \"Spring\", \"Summer\", \"Fall\", \"Winter\" } \n");

	for (cnt = 0; cnt < 4; cnt++)
		printf("%d번째 배열 요소인 *(ppc + %d) 출력 : %s\n", cnt + 1, cnt, *(ppc + cnt));

	return 0;
}