#include <stdio.h>

int main() {

    int n, i;
    scanf("%d", &n);
        
    for (i = 1; i <= n; i++)
    {        
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d%%",&arr[i]);
        }
        int t;
        for (i=0;i<n;i++)
        {
            if (arr[i] >= 0 && arr[i] <= 60)
            {
                t = (60 - arr[i]) + 20 * 2 + 20 * 3;
        //       printf("%d minutes\n", t);
            }
            else if (arr[i] >= 60 && arr[i] <= 80)
            {
                t = (80 - arr[i]) * 2 + 20 * 3;
        //       printf("%d minutes\n", t);
            }
            else if (arr[i] >= 80 && arr[i] <= 100)
            {
                t = (100 - arr[i]) * 3;
        //       printf("%d minutes\n", t);
            }
            printf("%d minutes\n", t);
        }
    }
    return 0;
}
