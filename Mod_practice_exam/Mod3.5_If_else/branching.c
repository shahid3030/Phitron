#include<stdio.h>
//Qs:Write a c programming which is show odd & even number.
int main()
{
    int x;
    printf("Enter an input: ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("The input is an even number.\n");
    }
    else
    {
        printf("The input is an odd number.\n");
    }
    return 0;
}
