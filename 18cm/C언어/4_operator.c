#include <stdio.h>

int add(int *n1, int *n2)
{
    return (*n1 + *n2);
}
int minus(int *n1, int *n2)
{
    return (*n1 - *n2);
}
int mult(int *n1, int *n2)
{
    return (*n1 * *n2);
}
int divi(int *n1, int *n2)
{
    return (*n1 / *n2);
}


int main(void)
{
    int num1, num2, sum = 0;
    char a;
    
    
    printf("두 정수 입력 ");
    scanf("%d %d", &num1, &num2);
    

    printf("연산자 입력");
    scanf("%s", &a);
    

    if(a == '+')
    {
    sum = add(&num1, &num2);
    printf("%d\n", sum);
    }
    

    else if(a == '-')
    {
    sum = minus(&num1, &num2);
    printf("%d\n", sum);
    }
    

    else if(a == '*')
    {
    sum = mult(&num1, &num2);
    printf("%d\n", sum);
    }
    

    else if(a == '/')
    {
    sum = divi(&num1, &num2);
    printf("%d\n", sum);
    }
    return 0;
}