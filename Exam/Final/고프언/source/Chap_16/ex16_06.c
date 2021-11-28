#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20

typedef struct NODE {           // NODE 자료형 정의
	char name[SIZE];
	int age;
	struct NODE* link;          // 자기 참조 구조체 선언
} NODE;

int main(void)
{
	NODE* list = NULL;         // list의 초깃값은 반드시 NULL 값으로 설정
	NODE* p_prev = NULL, * p, * p_next;  //p_prev의 초깃값을 반드시 NULL로 설정
	char buffer[SIZE];
	int age;

	/*- 연결 리스트 생성 -*/
	while (1)
	{
		printf("\n 성명 입력(그냥 엔터치면 종료) : ");
		gets_s(buffer, SIZE);     // 줄바꿈 문자를 NULL 문자로 변환하여 반환
		if (buffer[0] == '\0')    // 성명을 입력하지 않고 [엔터]키를 누를 경우
			break;                // 반복문을 빠져나가 프로그램 종료

		/*- 동적 메모리 할당 -*/
		p = (NODE*)malloc(sizeof(NODE));
		// 동적으로 생성된 구조체의 주소를 반환하고 이 주소를 포인터 p에 저장

		strcpy_s(p->name, sizeof(p->name), buffer);  // 문자열 복사 함수 사용
		printf(" 나이 입력 : ");
		gets_s(buffer, SIZE);
		age = atoi(buffer);      // atoi( ) 함수로 입력받은 문자열을 정수로 변환
		p->age = age;

		if (list == NULL)        // 리스트가 비어있을 경우
			list = p;            // 새로운 노드를 첫 번째 노드로 생성
		else                     // 리스트가 비어있지 않은 경우
			p_prev->link = p;    // 새로운 노드를 이전 노드의 링크 필드에 연결

		p->link = NULL;          // 새로운 노드의 링크 필드를 NULL로 설정
		p_prev = p;              // 현재 노드를 이전 이전 노드로 대입
	}

	/*- 연결 리스트에 들어있는 데이터 출력 -*/
	p = list;
	while (p != NULL)
	{
		printf("[ %s, %d ]", p->name, p->age);
		p = p->link;

		if (p != NULL)
			printf(" -> ");
	}

	/*- 할당된 동적 메모리 반납 -*/
	p = list;
	while (p != NULL)
	{
		p_next = p->link;
		free(p);
		p = p_next;
	}
	return 0;
}