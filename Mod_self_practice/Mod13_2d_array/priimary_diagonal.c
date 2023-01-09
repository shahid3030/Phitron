#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
        if (row = col)
        {
            int ans = 1;
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    if (i == j)
                    {
                        continue;
                    }
                    if (a[i][j] != 0)
                    {
                        ans = 0;
                    }
                }
            }
            if (ans == 1)
            {
                printf("diagonal\n");
            }
            else
            {
                printf("Not Diagonal");
            }
        }
        return 0;
    }
}