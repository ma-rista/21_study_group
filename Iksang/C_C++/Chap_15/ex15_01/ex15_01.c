#include <stdio.h>

int main(void)
{
	FILE *fp;
	errno_t err;

	err = fopen_s(&fp, "sample.txt", "wt");  // 쓰기 모드로 텍스트 파일 열기

	if (NULL != fp)                          // 파일 열기를 성공한 경우
	{
		printf(" 1.새로운 파일 생성 후 문자열 저장 완료 \n");
		fprintf(fp, "Happy Day \n");
		printf(" 2.윈도우 탐색기에서 sample.txt 파일 내용 확인 \n");
		fclose(fp);
	}
	else                                    // 파일 열기를 실패한 경우
		printf(" 파일 열기 실패 \n");

	return 0;
}