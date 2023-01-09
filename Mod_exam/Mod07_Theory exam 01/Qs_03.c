#include <stdio.h>

int main()
{
    long long int n, count = 0;
    scanf("%lld", &n);

    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    printf("%lld ", count);

    if (count > 1)
        printf("digits");
    else
        printf("digit");

    return 0;
}