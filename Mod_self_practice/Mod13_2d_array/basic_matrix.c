#include<stdio.h>

int main()
{   
    int row=4,col=3;
    int a[row][col];
    int i,j;
    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}