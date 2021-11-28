#include <stdio.h>
#define AL 8 // 배열의 크기
int b_s(int list[], int n, int input); // 사용자 정의 함수 선언

int main(void)
{
	int sno[AL] = { 3, 8, 15, 24, 35, 57, 68, 85 };
	int input, search;
	char yn;

	do
	{
		printf(" \n초기> 배열 요소 : 3 8 15 24 35 57 68 85\n");
		printf("숫자 입력 : ");
		scanf_s("%d", &input);

		search = b_s(sno, AL, input); // 사용자 정의 함수 호출
		printf("탐색 성공 인덱스 : [%2d] \n", search);

	re_input:

		printf("프로그램을 다시 실행하겠습니까? (Y/N) : ");
		scanf_s(" %c", &yn, sizeof(yn));

		if (yn == 'N' || yn == 'n')
			break;

		else if (yn == 'Y' || yn == 'y')
			continue;

		else
		{
			printf(" \n알파벳 입력 오류! \n");
			printf("알파벳을 다시 입력하세요. \n");
			goto re_input;
		}
	} while (1);
	return 0;
}

int b_s(int list[], int n, int input) // 사용자 정의 함수 선언
{
	int low = 0; // 하한값 대입 변수
	int high = n - 1; // 상한값 대입 변수 인덱스는 -1을 수행
	int md, cnt = 1; // 중간값 대입 변수와 카운트 변수

	while (low <= high) // 남아 있는 배열 요소가 있으면 반복 수행
	{
		printf("%d회 이진 탐색 : [%d %d] \n", cnt, low, high);
		// 하한과 상한 출력

		md = (low + high) / 2; // 중간 위치 산출

		if (input == list[md]) // 값을 찾으면 요소의 값 반환
			return md;

		else if (input > list[md]) // 중간 배열 요소 값보다 클 경우
			low = md + 1;

		else // 값을 못 찾거나 중간 배열 요소 값보다 크지 않을 경우
			high = md - 1; // high 변수값을 새로운 값으로 설정 

		cnt++;
	}
	return -1; // 배열 요소에 없는 값 입력하면 -1 반환
}