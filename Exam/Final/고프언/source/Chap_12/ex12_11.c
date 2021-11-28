#include <stdio.h>
#include <string.h>

void selection(char*, int); // 사용자 정의 함수 선언

int main(void)
{
	char str[80]; // 키보드로부터 문자열 입력받아 저장 

	printf("문자열 입력 : ");
	gets(str); // 직접형 입력 함수 사용

	selection(str, strlen(str)); // 선택 정렬 함수 호출 

	printf("문자열을 선택 정렬한 결과 : %s\n", str);
	return 0;
}

void selection(char* item, int count) // 선택 정렬 사용자 정의 함수
{
	int i, j, k;
	char t;

	printf(" \n[선택 정렬 함수 영역] \n\n");

	for (i = 0; i < count - 1; ++i) // 입력한 문자열 길이 - 1만큼 반복 수행 
	{
		t = item[i];
		k = i;
		for (j = i + 1; j < count; ++j) // 선택 정렬 반복 수행 
		{
			if (item[j] < t) // 아스키코드값에서 작은 값을 찾아 임시 저장 
			{
				k = j;
				t = item[j];
			}
		}
		item[k] = item[i]; // 서로 교체 
		item[i] = t;
	}
}