#include <stdio.h>

// Qs:Write a C program to take one integer N as input and print from 1 to N.

// Sample Input:                     Sample Output:
// 5                                 1 2 3 4 5
//-5                                1 0 -1 -2 -3 -4 -5

int main()
{
    int n, i;

    printf("\nEnter the integers: ");
    scanf("%d", &n);
    if (n >= 0)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i = 1; i >= n; i--)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
