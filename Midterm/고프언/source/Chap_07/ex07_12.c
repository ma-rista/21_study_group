#include <stdio.h>

int main(void)
{
	int cnt; // 카운트 변수

	cnt = 0; // 반복문의 초깃값 선언
	while (cnt < 30)
	{
		cnt++; // 반복문의 증감값
		printf("%3d", cnt); // 1부터 30까지 숫자를 3자리 간격으로 출력

		if ((cnt % 5) == 0) // 한 줄에 5개씩 출력하고 줄 바꿈
			printf(" \n");
	}
	return 0;
}