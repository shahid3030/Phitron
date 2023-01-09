#include<stdio.h>

//Qs:Write a C program to take one positive integer N as input and print from 1 to N.

//Sample Input:             Sample Output:
//5                         1 2 3 4 5
//1                         1

int main()
{
    int n,i;

    printf("Enter the positive integers:\n ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
   

    return 0;
}