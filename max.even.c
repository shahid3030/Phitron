#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max1=arr[0];
    for (i=1;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max1=arr[i];
        }
    }

    int max2 = arr[0] + arr[1];
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (i != j)
            {
                if ((arr[i] + arr[j]) % 2 == 0)
                {
                    if (arr[i] + arr[j] > max2)
                    {
                        max2 = arr[i] + arr[j];
                    }
                }
            }
        }
    }
    if(max1>max2)
    {
        printf("%d ", max1);
    }
    else
    {
        printf("%d ", max2);
    }
    
}