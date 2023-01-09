#include <stdio.h>

int main()
{
   int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int s;
        scanf("%d", &s);
        scanf("\n");
        int count=0;

        for (j = 2; j < s; j++)
        {
            if (s % j == 0)
            {
                count++;
            }
        }
        if(count!=0 || s==1)
        {
            printf("No");
            printf("\n");
        }
        else
        {
            printf("Yes");
            printf("\n");
        }
    }
    return 0;
}