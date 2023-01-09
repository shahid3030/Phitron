#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int a[100][100];

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (a[i][j]==i && a[i][j]==j)
            {
                a[i][j] += 3;
            }
            else if (a[i][j]==i && a[i][j]!=j)
            {
                a[i][j] += 2;
            }
            else if (a[i][j]==j && a[i][j]!=i)
            {
                a[i][j] += 1;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}