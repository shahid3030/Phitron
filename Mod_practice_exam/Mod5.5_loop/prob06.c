#include <stdio.h>
// Qs:Write a C program to take two non-negative integers N and M.
// Here N and M represents time in hours (24 hours format).
// You need to print from N to M, if you need to start from beginning again, you can do that.
// See the sample input output for more clarification.
// Sample Input:                     Sample Output:
// 5 12                             5 6 7 8 9 10 11 12
// 21 7                             21 22 23 0 1 2 3 4 5 6 7

int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);

    if (m > n)
    {

        for (i = n; i <= m; i++)
        {
            printf("%d ", i);
        }
        return 0;
    }
    else
    {
        for (i = n; i <=23; i++)
        {
            printf("%d ", i);
        }
        for (i = 0; i <= m; i++)
        {
            printf("%d ", i);
        }
    }
}