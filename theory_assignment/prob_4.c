#include <stdio.h>
#include <string.h>

int main()
{
    int n, k, i;

    scanf("%d %d", &n, &k);

    char s[n];
    for (i = 0; i < n; i++)
    {
        s[i] = i + 1;
    }
    char s1[50];
    int j=1;

    for (i = 0; i < n; i++)
    {
        if (s[i] % 2 == 0)
        {
            s1[j] = s[i];
            printf("%d ", s1[j]);
            j++;
        }
    }

     for (i = 0; i < n; i++)
    {
        if (s[i] % 2 != 0)
        {
            s1[j] = s[i];
            printf("%d ", s1[j]);
            j++;
        }
    }
//  the 9th element is...
    printf("\nThe 9th element in this sequence is %d.", s1[k]);
    return 0;
}