#include<stdio.h>
//Qs:Write a C program to take two positive integers as input and show the summation, subtraction and
//multiplication of those two numbers.

//Sample Input:                 Sample Output:
//5 2                           7 3 10
int main()
{
    int a;
    int b;

    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);

    int summation,subtraction,multiplication;
    summation = a+b;
    subtraction = a-b;
    multiplication = a*b;

    printf("The summation of two numbers is %d\n",summation);
    printf("The subtraction of two numbers is %d\n",subtraction);
    printf("The multiplication of two numbers is %d\n",multiplication);

    return 0;

}
