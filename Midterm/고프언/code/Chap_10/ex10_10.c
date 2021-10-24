#include <stdio.h>
#define AL 5 // 배열의 크기

int main(void)
{
	int s_list[AL] = { 5, 4, 1, 3, 2 };
	int a, b, temp, sort;

	printf("초기> 배열 요소: 5 4 1 3 2\n");
	printf(" \n[for 문으로 선택 정렬 수행] \n");

	for (a = 0; a < AL - 1; a++) // 자신과 비교한 인덱스 제외
	{
		sort = a; // 배열 요소 4개 반복 대입

		for (b = a + 1; b < AL; b++) // 자신과 비교한 인덱스 제외
			if (s_list[b] < s_list[sort]) // 정렬되지 않은 배열 요소 중 작은 값 찾는 과정
				sort = b;

		/*-- 선택 정렬을 통한 값 치환 --*/
		temp = s_list[a]; // a를 temp로 대입
		s_list[a] = s_list[sort]; // sort를 a에 대입
		s_list[sort] = temp; // temp를 sort에 대입
	}
	printf("결과> 배열 요소: ");

	for (a = 0; a < AL; a++) // 배열 크기만큼 반복
		printf("%d ", s_list[a]); // 정렬 결과 출력

	return 0;
}