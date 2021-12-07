#include <stdio.h>
#include <stdlib.h> // rand() 함수를 사용하기 위한 헤더 파일
#include <time.h> // time() 함수를 사용하기 위한 헤더 파일

#define PT 7

int main(void)
{
	int ex[PT];
	int cnt;

	printf("1~500 사이 숫자를 랜덤 출력 \n");
	srand((unsigned)time(NULL)); // 시간 차별화 

	for (cnt = 0; cnt < PT; cnt++)
		ex[cnt] = 1 + (rand() % 500);

	for (cnt = 0; cnt < PT; cnt++)
		printf("ex[%d] = %d\n", cnt, ex[cnt]); // 1~500까지 랜덤 숫자 출력 

	return 0;
}