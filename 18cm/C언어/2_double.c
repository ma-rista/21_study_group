#include <stdio.h>

int main(void)
{
    int arr_2[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i < 10; i++)
    printf("배열 값%d\n%d\n", i + 1, arr_2[i]);
    int i;
    for(i = 0; i < 10; i++)
    printf("%d 값의 두배 = %d\n", arr_2[i], arr_2[i] * 2);
    return 0;
}