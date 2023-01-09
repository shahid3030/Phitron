#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter two inputs: ");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
      printf("x is large.");
    }
    else
    {
        if(x<y)
        {
            printf("y is large.");
        }
        else
        {
            printf("they are equal.");
        }
    }

    return 0;
}
