#include <stdio.h>

int main(void)
{
	FILE *fp;
	errno_t err;

	err = fopen_s(&fp, "smile.txt", "wt");  // 쓰기 모드로 텍스트 파일 열기

	if (NULL != fp)    // 파일 열기를 성공한 경우
	{
		fprintf(fp, "안녕하세요. \n");
		fprintf(fp, "언제나 웃음은 행복을 선사합니다. \n");

		printf(" >> 새로운 smile.txt 파일 : 생성 완료 \n");
		printf(" >> 생성된 파일 위치 : 소스 코드와 동일한 디렉터리\n");
		printf(" >> smile.txt 파일 안에 내용 확인 \n");

		fclose(fp);
	}
	else            // 파일 열기를 실패한 경우
		printf(" >> 파일 열기 실패 !! \n");

	return 0;
}