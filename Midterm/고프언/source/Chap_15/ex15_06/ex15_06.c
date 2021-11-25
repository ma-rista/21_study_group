#include <stdio.h>

int main(void)
{
	char sts[50];
	int cnt;
	FILE *foc = NULL;      // FILE형 구조체 포인터 변수 선언
	errno_t err;           // errno_t는 typedef 되어 있는 데이터 타입으로 정수값이 저장됨

	err = fopen_s(&foc, "save.txt", "w");  // 파일이 없으면 새로 생성하여 쓰기 w 선언 

	if (err == 0)
	{
		printf(" save.txt 파일 생성 완료 \n");
		printf(" 1.문자열 입력 : ");
		gets_s(sts, sizeof(sts));     // 문자열을 입력 받음

		printf(" 2.파일에 쓴 내용 : %s\n", sts);

		for (cnt = 0; sts[cnt] != NULL; cnt++)
			fputc(sts[cnt], foc);    // 저장된 문자열을 1개씩 읽어서 지정된 파일에 출력

		fclose(foc);
		printf(" save.txt 파일 닫기 성공 \n");
	}
	else
		printf(" save.txt 파일 생성 실패 \n");

	return 0;
}