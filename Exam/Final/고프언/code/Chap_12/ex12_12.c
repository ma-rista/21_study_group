#include <stdio.h>
#include <string.h>

int sequential(char*, int, char); // 사용자 정의 함수 선언

int main(void)
{
	char str[80];
	char key = 'k';
	int check;

	printf("문자열 입력 : ");
	gets(str); // 키보드로부터 문자열 입력받을 배열 선언

	check = sequential(str, strlen(str), key); // 인수 3개 전달하여 호출

	if (check < 1)
		printf("입력한 문자열에는 알파벳 소문자 \"k\"가 없습니다.\n");
	else
	{
		printf("알파벳 소문자 \"k\"를 찾았습니다.\n");
		printf("문자열의 %d번째에 있습니다.\n", check + 1);
	}
	return 0;
}

int sequential(char* item, int count, char key) // 순차 탐색 함수 정의
{
	int i;

	printf("\n[순차 탐색 함수 영역]\n\n");

	for (i = 0; i < count; ++i) // 알파벳을 찾는 순차 탐색 반복 수행

		if (key == item[i]) // 일치할 경우
			return i;

	return -1; // 일치하지 않을 경우
}