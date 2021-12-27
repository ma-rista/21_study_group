#include <stdio.h>

int douBle(int *a, int size)
{
    int i;
    int hap = 0;
    int arr_3[10];
    for (i = 0; i < sizeof(arr_3) / sizeof(int); i++) // 배열의 요소 개수만큼 반복
    {
        arr_3[i] = a[i] * a[i];
    }
    for (i = 0; i < sizeof(arr_3) / sizeof(int); i++)
    {
        printf("douBle함수 -> %d\n", arr_3[i]);
    }
    
    return arr_3;
}

int main()
{
    int arr_2[10];
    int i, squared;

    int *ptr = arr_2;

    for (i = 0; i < 11; i++)
    {
        arr_2[i] = i + 1;
    }
    for (i = 0; i < sizeof(arr_2)/sizeof(int); i++)
    {
        printf("%d\n", arr_2[i]);
    }

    for (i = 0; i < 2; i++)
    {
        squared = douBle(ptr, 11);
    }

    return 0;
}


