#include <stdio.h>
struct person {
 char dept[20];
 char name[10];
 int grade;
 };
 int main(void)
 {
	 struct person p1 = { "소프트웨어학과", "최첨단", 2 };
	 struct person p2 = { "빅데이터분석학과", "강분석", 3 };

	 p2 = p1;
	 printf("%-20s %-10s %-8s\n", "학과", "성명", "학년");
	 printf("%-20s %-10s %-8d\n", p1.dept, p1.name, p1.grade);
	 printf("%-20s %-10s %-8d\n", p2.dept, p2.name, p2.grade);
	 return 0;
 }