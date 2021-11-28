#include <stdio.h>
#include <string.h>

#define MAX 80                     // 문자열 최대 입력 수
int sequential(char*, int, char);  // 사용자 정의 함수 선언

int main(void)
{
	char str[MAX];                   // 키보드로 부터 문자열 입력받을 배열 선언
	char key = 'Q';
	char yn;
	int check;

	do {
		printf(" >> 문자열 입력 : ");
		gets_s(str, sizeof(str));                   // 키보드로부터 문자열을 입력받아 저장

		check = sequential(str, strlen(str), key);  // 인수 3개를 전달하여 호출

		if (check < 0)
			printf(" >> 입력한 문자열에는 알파벳 대문자 \"Q\"가 없습니다.\n");
		else
		{
			printf(" >> 알파벳 대문자 \"Q\"를 찾았습니다 !!!  \n");
			printf(" >> 문자열의 [ %d ]번째에 있습니다.\n", check + 1);
		}

	re:
		printf("\n >> 프로그램 다시 시작?(Y/N) : ");
		scanf_s("%c", &yn);
		getchar();

		if (yn == 'Y' || yn == 'y')
			continue;
		else if (yn == 'N' || yn == 'n')
		{
			printf(" >> 프로그램을 종료합니다. \n");
			return 0;
		}
		else
		{
			printf(" >> 문자 입력 오류 !! \n");
			goto re;
		}
	} while (1);
}

int sequential(char* item, int count, char key)   // 순차 탐색을 수행하는 사용자 함수 정의
{
	int i;

	printf("\n  <<<<< 순차 탐색 함수 영역 >>>>>  \n\n");

	for (i = 0; i < count; ++i)        // 찾고자 하는 알파벳을 순차 탐색을 반복 수행

		if (key == item[i])            // 일치할 경우
			return i;

	return -1;  // 일치하지 않을 경우 
}