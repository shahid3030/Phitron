#include<stdio.h>
//Qs:Write a C program to declare two integer variables and set values 10 and 20 respectively. Now print the second
//number and then the first number.

//Sample Input:                   Sample Output:
//No Input                        20 10
int main()

{
    int a,b;

    printf("Enter the number: ");
    scanf("%d%d",&b,&a);

    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);


    return 0;
}
