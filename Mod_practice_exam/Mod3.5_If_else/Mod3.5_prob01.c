#include<stdio.h>

int main()
{
    int A,B;
    printf("Enter two inputs: ");
    scanf("%d %d",&A,&B);
    if(A>B)
    {
        printf("A is bigger.");
    }
    else if(A<B)
    {
        printf("B is bigger.");
    }
    else
    {
        printf("They are equal.");
    }

    return 0;
}
