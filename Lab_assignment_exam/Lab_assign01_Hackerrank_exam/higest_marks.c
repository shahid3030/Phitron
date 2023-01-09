#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[1];
    for (i = 1; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", max - arr[i]);
    }

    return 0;
}
