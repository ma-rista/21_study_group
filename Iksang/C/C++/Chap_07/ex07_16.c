#include <stdio.h>

int main(void)
{
	int cnt, su, hap = 0; // 카운트 변수, 입력값 저장 변수, 누적합 저장 변수

	printf("홀수는 continue 문을 사용하여 건너뜁니다. \n");
	printf("정수 입력 : ");

	scanf_s("%d", &su);

	for (cnt = 1; cnt <= su; cnt++)
	{
		if ((cnt % 2) != 0) // 짝수가 아닐 경우
			continue;
		else
		{
			hap += cnt; // hap = hap + cnt
			printf("%3d", cnt);

			if ((cnt % 20) == 0) // 짝수일 때만 개수가 인정되므로 20으로 나눔
				printf(" \n"); // 한 줄에 10개씩 출력 후 줄 바꿈
		}
	}
	printf(" \n1부터 %d까지 짝수의 누적 합계 : %d\n", su, hap);
	return 0;
}