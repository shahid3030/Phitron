#include <stdio.h>

int main()
{
    int i;
    int arr[15];
    arr[0] = 1;
    for (i = 1; i < 15; i++)
    {
        arr[i] = arr[i - 1] * 2;
    }
    for (i = 0; i < 14; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("%d.", arr[14]);
    return 0;
}