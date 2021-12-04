#include <stdio.h> 
typedef struct point {
	int a;
	int b;
} PS; // 새로운 자료형인 PS 정의 
PS avg(PS s1, PS s2);// 사용자 정의 함수 원형 

int main(void)
{
	PS pack = { 88, 99 }; // 중간고사와 기말고사 점수 
	PS shin = { 83, 98 };
	PS result;
	result = avg(pack, shin);// 사용자 정의 함수 호출 

	printf("중간고사 평균 : %d\n", result.a);
	printf("기말고사 평균 : %d\n", result.b);
	return 0;
}
PS avg(PS s1, PS s2)
{
	PS score;
	score.a = (s1.a + s2.a) / 2;
	score.b = (s1.b + s2.b) / 2;
	return score;
}