#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    char str[n + 1];
    scanf("%s", str);

    int count1 = 0, count2 = 0;

    for (i = 0; i < n; i++)
    {
        if (str[i] == '+' && str[i + 1] == '+')
        {
            count1++;
        }
    }
    count1 += 1;
    for (i = 0; i < n; i++)
    {
        if (str[i] == '-' && str[i + 1] == '-')
        {
            count2++;
        }
    }
    count2 += 1;
    if (count1 > count2)
    {
        printf("%d", count1);
    }
    else
    {
        printf("%d", count2);
    }
    return 0;
}