#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    char str[n + 1];
    scanf("%s", str);

    int count = 0;
    char rest=str[0];

    for (i = 0; i < n; i++)
    {
        int count1 = 1;
        for (j = i + 1; j < n; j++)
        {
            if (str[i] != str[j])
            {
                break;
            }
            count1++;
        }
        if(count1>count)
        {
            count=count1;
            rest=str[i];
        }
    }
    printf("%d",count);
    return 0;
}