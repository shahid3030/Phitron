#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d",&N);

    if (N>1)
    {
        for (j = 1; j <= N; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    for (i = 2; i <= (N - 1); i++)
    {   
        printf("%d",i);
        for (j = 1; j <= (N-2); j++)
        {
            printf(" ");
        }
        printf("%d",N);
        printf("\n");
    }
    
    for (j = 1; j <= N; j++)
    {
        printf("%d",N);
        
    }
    printf("\n");
    
    return 0;
}