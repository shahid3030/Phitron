#include<stdio.h>
//Qs:Write a C program to take a character variable and input and show the corresponding ASCII value of that
//character

//Sample Input:                  Sample Output:
//A                              65
//C                              67
//a                              97
//d                              100
int main()
{
    char A,C,a,d;
    printf("Enter a character: ");
    scanf("%c%c%c%c",&A,&C,&a,&d);


    printf("The ASCII value of the A is : %d\n",A);
    printf("The ASCII value of the C is : %d\n",C);
    printf("The ASCII value of the a is : %d\n",a);
    printf("The ASCII value of the d is : %d\n",d);

    return 0;
}
