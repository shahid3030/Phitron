#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d ", n);

    while (n>=2)
    {
        if (n%2!=0)
        {
            printf ("%d ", n-=1);
        }
        printf("%d ", n/2);
        n=n/2;
    }
    return 0;
}