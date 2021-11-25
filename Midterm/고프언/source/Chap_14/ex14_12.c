#include <stdio.h>

enum season { SP, SM, FA, WI };
char* sname[] = { "spring", "summer", "fall", "winter" };

int main(void)
{
	enum season s;
	s = SM;

	printf("%d번째 계절은 %s입니다. \n", s + 1, sname[s]);
	return 0;
}