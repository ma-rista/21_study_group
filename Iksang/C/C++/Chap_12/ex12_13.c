#include <stdio.h>
#include <string.h>

int binary(char*, int, char); // 사용자 정의 함수 선언

int main(void)
{
	char str[80]; // 키보드로부터 문자열 입력받아 저장
	char key = 'k';
	int check;

	printf("문자열 입력 : ");
	gets(str);

	check = binary(str, strlen(str), key); // 인수 3개 전달하여 함수 호출

	if (check < 1)
	{
		printf("입력한 문자열에는 문자 k가 없습니다. \n");
	}
	else
	{
		printf("문자 k를 찾았습니다. \n");
		printf("문자열의 %d번째에 있습니다. \n", check + 1);
	}
	return 0;
}

int binary(char* item, int count, char key) // 이진 탐색 함수 정의
{
	int low = 0, high, mid;
	high = count - 1;

	printf(" \n[이진 탐색 함수 영역] \n\n");

	while (low <= high) // 문자열 길이 -1보다 적으면 반복 수행
	{
		mid = (low + high) / 2; // 배열 요소의 중간부터 탐색

		if (key < item[mid]) // 알파벳 k가 작을 경우
			high = mid - 1;
		else
			if (key > item[mid]) // 알파벳 k가 클 경우
				low = mid + 1;
			else
				return mid; // 발견했으므로 값 반환 
	}
	return -1;
}