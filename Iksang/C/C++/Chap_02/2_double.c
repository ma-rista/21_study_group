#include <stdio.h>

int main()
{
    int arr_2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };    

    for (int i = 0; i < sizeof(arr_2) / sizeof(int); i++)   
    {
        arr_2[i] *= 2;    
    }

    for (int i = 0; i < sizeof(arr_2) / sizeof(int); i++)    
    {
        printf("%d\n", arr_2[i]);
    }

    return 0;
}