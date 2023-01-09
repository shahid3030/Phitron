#include<stdio.h>
//Qs:Write a C program to take integer value as input and print that value. There is a twist! The input will contain a %
//sign.

//Sample Input:                      Sample Output:
//20%                                20
int main()
{
    int a;
    char b;
    printf("Enter the percentage value: ");
    scanf("%d%c",&a,&b);

    printf("The percentage value is %d",a);
    return 0;
}
