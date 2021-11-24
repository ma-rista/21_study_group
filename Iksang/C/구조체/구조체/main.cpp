//
//  main.cpp
//  구조체
//
//  Created by 정익상 on 2021/11/24.
//

#include <stdio.h>
#include <stdlib.h>

struct student
{
    int number;
    char name[10];
    double grade;
}; //struct 는 ; 으로 종료해야 한다

int main(void)
{
    struct student s;
    s.number = 20212316;
    st(s.name, "정익상");
    s.grade = 1.9;
    
    printf("학번 : %d", s.number);
    printf("\n");
    
}
