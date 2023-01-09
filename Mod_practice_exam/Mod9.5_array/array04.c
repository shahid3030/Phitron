#include<stdio.h>

int main()
{   
    int n,i,j;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int q;
    scanf("%d",&q);

    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (arr[j]==q)
            {
                printf("%d-",arr[j]);
                break;
            }

        }
        printf("%d ",arr[i]);
    }

    return 0;
}