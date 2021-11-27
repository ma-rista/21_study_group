#include <stdio.h>
#include <ctype.h> // 입력 문자를 검사하는 함수의 헤더 파일

int main(void)
{
	int index = 0, cnt = 0;
	char str[] = "korea \t space\n";

	printf("char str[ ] = \"korea \ \t space \ \n\"으로 선언 \n");

	while (str[index]) // 제시한 문자열의 개수만큼 반복 수행
	{
		if (iscntrl(str[index])) // 제어 문자가 포함되어 있을 경우
			cnt++; // 제어 문자 개수 카운트
		index++; // 배열 인덱스 카운트
	}
	printf("제어 문자는 모두 %d개 존재합니다. \n", cnt);
	return 0;
}