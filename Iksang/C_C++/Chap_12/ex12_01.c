#include <stdio.h>

int main(void)
{
	char sa[] = "Spacezone"; // 배열의 크기는 자동 저장
	char* ps = "Spacezone";
	int cnt;

	printf("배열 선언 char sa[ ] = \"Spacezone\" \n");
	printf("포인터 선언 char *ps = \"Spacezone\" \n");

	printf(" \n배열 주소값 : %d\n", sa);
	printf("포인터 주소값 : %d\n", ps);

	printf(" \n[배열 사용] \t [포인터 사용] \n");

	for (cnt = 0; cnt < 9; cnt++)
	{
		printf("sa[%d] : %c\t\t", cnt, sa[cnt]);
		printf("*(ps + %d) : %c\n", cnt, *(ps + cnt));
	}
	return 0;
}