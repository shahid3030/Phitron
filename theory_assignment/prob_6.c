#include<stdio.h>

int factorial (int a)
{
    int fact=1;
    for (int i=1; i<=a; i++)
    {
         fact*=i;
    }
    return fact;
}

int main ()
{
    int x, y;
    int n=0, m=0, ratio=0;
    scanf("%d %d", &x, &y);

    n=factorial(x);
    m=factorial(y);

    ratio = n/m;
    printf("ratio=%d", ratio);

    return 0;
}