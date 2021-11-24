//
//  main.c
//  구조체
//
//  Created by 정익상 on 2021/11/24.
//

#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

struct Person {   // 구조체 정의
    char name[20];        // 구조체 멤버 1
    int age;              // 구조체 멤버 2
    char address[100];    // 구조체 멤버 3
};

int main()
{
    struct Person p1;     // 구조체 변수 선언

    // 점으로 구조체 멤버에 접근하여 값 할당
    strcpy(p1.name, "정익상");
    p1.age = 20;
    strcpy(p1.address, "익산시 신동");

    // 점으로 구조체 멤버에 접근하여 값 출력
    printf("이름: %s\n", p1.name);       // 이름: 정익상
    printf("나이: %d\n", p1.age);        // 나이: 20
    printf("주소: %s\n", p1.address);    // 주소: 익산시 신동

    return 0;
}
