#include<stdio.h>

int main()
{
    int x;
    printf("Enter an input; ");
    scanf("%d",&x);

    if(x%2==1)
    {
        printf("The input is an odd number.\n");
    }
    else
    {
        printf("The input is an even number.\n");
    }

    return 0;
}
