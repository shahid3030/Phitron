#include <stdio.h>

// Write a C program to take one positive integer N as input and print all even numbers from 1 to N.

// Sample Input:                     Sample Output:
// 10                                2 4 6 8 10
// 7                                 2 4 6

int main()
{
    int n, i;
    printf("Take one positive integers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}