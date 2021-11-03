#include <stdio.h>

struct student { // student 구조체 선언
	int sno;
	char name[10];
	int kor;
	int eng;
	int mat;
	float avg;
};

int main(void)
{
	struct student s; // 구조체 변수 s 선언
	int cnt, sum;

	printf("학생별 학번, 성명, 성적 입력 \n");

	for (cnt = 1; cnt <= 3; cnt++) {

		printf(" \n[3명 중 %d번째 학생] \n", cnt);
		printf("학번 : ");
		scanf_s("%d", &s.sno);
		printf("성명 : ");
		scanf_s("%s", s.name, sizeof(s.name));
		printf("국어 점수 : ");
		scanf_s("%d", &s.kor);
		printf("영어 점수 : ");
		scanf_s("%d", &s.eng);
		printf("수학 점수 : ");
		scanf_s("%d", &s.mat);

		sum = s.kor + s.eng + s.mat;
		s.avg = sum / 3.0;

		printf(" \n학번 \t\t성명 \t국어 \t영어 \t수학 \t평균 \n");
		printf("%d \t%s \t%d \t%d \t%d \t%.2f \n", s.sno, s.name, s.kor, s.eng, s.mat, s.avg);
	}
	return 0;
}