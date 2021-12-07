#include <stdio.h>
#include <stdlib.h>    

int main(void)
{
	int cnt;
	int* list;
	int* new_list;

	printf(" 정수 2개 저장 메모리 확보 \n");
	list = (int*)malloc(sizeof(int) * 2);

	list[0] = 10;
	list[1] = 20;

	for (cnt = 0; cnt < 2; cnt++)
		printf(" %d", list[cnt]);
	printf("\n");

	printf("\n 정수 3개 저장 메모리 공간으로 확장 \n");
	new_list = (int*)realloc(list, sizeof(int) * 3);

	list[2] = 30;

	for (cnt = 0; cnt < 3; cnt++)
		printf(" %d ", new_list[cnt]);
	printf("\n");

	free(new_list);
	return 0;
}