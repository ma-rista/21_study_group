#include <stdio.h>

int main(void)
{
	int su, cnt, hap = 0; // su : 입력받을 값 저장 변수, cnt : 카운트 변수 

re: // goto 문을 위한 레이블 이름
	printf("어디까지 합을 구할까요 : ");
	scanf_s("%d", &su);

	if (su < 0)
	{
		printf("음의 정수는 허용하지 않습니다. \n");
		printf("프로그램을 다시 시작합니다. \n\n");
		goto re; // re 레이블 위치로 강제 이동
	}
	else
	{
		cnt = 1; // 반복문의 초깃값 선언

		do
		{
			if (hap > 1000) // 누적합이 1000을 초과하는지 판별
			{
				printf("누적되는 합이 1000을 초과하였습니다. \n");
				break;
			}
			else
				hap += cnt; // hap = hap + cnt

			printf("%d회 반복 누적합 : %d\n", cnt, hap);
			cnt++; // 반복문의 증감값
		} while (cnt <= su);

		printf("1부터 %d까지 누적합 : %d\n", cnt - 1, hap);
	}
	return 0;
}