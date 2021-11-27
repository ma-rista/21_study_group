#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cnt, kuk, eng, mat, tot;
	char name[16];
	double avg;
	FILE *in, *out;
	errno_t err1, err2;

	err1 = fopen_s(&in, "input.dat", "r");      // 읽기 모드로 파일 열기
	err2 = fopen_s(&out, "output.dat", "w");    // 쓰기 모드로 파일 열기 

	if ((in == NULL) || (out == NULL))
	{
		puts(" >> ??? [ input.dat ] 파일이 존재하지 않음 !!!");
		exit(1);                               // 프로그램 종료
	}

	puts(" >> input.dat 파일을 찾았습니다.");

	/*-  output.dat 파일에서 출력될 내용   -*/
	fprintf(out, "================================================\n");
	fprintf(out, "성명 \t| 국어\t| 영어\t| 수학\t| 총점\t| 평균 \n");
	fprintf(out, "------------------------------------------------\n");

	for (cnt = 0; cnt <= 2; cnt++)
	{
		fscanf_s(in, "%s %d %d %d", name, sizeof(name), &kuk, &eng, &mat);
		tot = kuk + eng + mat;
		avg = tot / 3.0;
		fprintf(out, "%s\t | %3d\t | %3d\t | %3d\t | %3d\t | %7.3f \n",
			name, kuk, eng, mat, tot, avg);
	}
	fprintf(out, "------------------------------------------------\n");

	puts(" 총점과 평균 산출 완료 ");
	puts(" output.dat 파일의 내용을 확인하세요.");

	fclose(in);
	fclose(out);
	return 0;
}