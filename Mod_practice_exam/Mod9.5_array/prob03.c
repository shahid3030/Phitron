#include<stdio.h>

int main()
{   
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int count;

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=1;i<n;i++)
    {
        if ((arr[i]/arr[i-1])!=1)
        {
            printf("No");
            break;
        }
        if ((arr[i]/arr[i-1])==1)
        {
            count++;
        }
    }
    if (count==(n-1))
    {
        printf ("Yes");
    }
    return 0;
}