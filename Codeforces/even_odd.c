#include <stdio.h>

int main()
{
    long long int ran, pos, i;
    scanf("%lld %lld", &ran, &pos);

    long long int odd = (ran / 2) + (ran % 2);
    long long int result;
    long long int j;
    if (pos > odd)
    {
        for (i = 1, j = 2; i <= pos - odd; i++, j = j + 2)
        {
            result = j;
        }
    }

    else
    {
        for (i = 1, j = 1; i <= pos; i++, j = j + 2)
        {
            result = j;
        }
    }
    printf("%lld", result);
    return 0;
}