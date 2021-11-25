#include <stdio.h>

int main(void)
{
	int su, cnt = 1, hap = 0; // su : 입력받을 값 저장 변수, cnt : 카운트 변수

	while (1) // 무한 루프를 수행하는 반복문
	{
		printf("어디끼지의 합을 구할까요 : ");
		scanf_s("%d", &su);

		if (su < 0) // 음의 정수가 입력되었을 경우 처리
		{
			printf("음의 정수는 허용하지 않습니다. \n");
			printf("프로그램을 다시 시작합니다. \n");
			continue; // 반복문의 처음으로 이동
		}
		else
		{
			while (cnt <= su) // 입력한 숫자보다 작을 동안 누적합계 반복 수행
			{
				hap += cnt; // hap = hap + cnt;
				printf("%d까지 누적합 ... %d\n", cnt, hap);

				if (hap > 50)
				{
					printf("누적합계 50을 초과하여 프로그램을 종료합니다. \n");
					break; // 현재 위치한 반복문만 탈출
				}
				cnt++;
			}
			return 0; // 프로그램 종료
		}
	}
}