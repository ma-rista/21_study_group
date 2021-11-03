#include <stdio.h>

int main(void)
{
	int cnt, size;
	char* dept[] = {
	"행정학과",
	"법학과",
	"빅데이터사이언스학과",
	};
	printf("전공 학과 선택 \n");
	size = sizeof(dept) / sizeof(dept[0]); // 배열 요소의 개수 산출
		for (cnt = 0; cnt < size; cnt++) // 문자열 상수 출력
			printf("%d. %s\n", cnt + 1, dept[cnt]);
	return 0;
}