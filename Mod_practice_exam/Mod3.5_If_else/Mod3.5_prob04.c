#include<stdio.h>

int main ()
{
    int x;
    printf("Enter the input: ");
    scanf("%d",&x);


    if(x>=0 && x<=32)
    {
        printf("The grade is F");
    }

    else if(x>=33 && x<=39)
    {
        printf("The grade is D");
    }
    else if(x>=40 && x<=49)
    {
        printf("The grade is C");
    }
    else if(x>=50 && x<=59)
    {
        printf("The grade is B");
    }
    else if(x>=60 && x<=69)
    {
        printf("The grade is A-");
    }
    else if(x>=70 && x<=79)
    {
        printf("The grade is A");
    }
    else if (x>=80 && x<=100)
    {
        printf("The grade is A+");
    }


    return 0;
}
