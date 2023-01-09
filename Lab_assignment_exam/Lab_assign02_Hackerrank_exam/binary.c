#include <stdio.h>

int main()
{
   int t, i, j;
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        scanf("\n");
        char str[n+2];
        scanf("%s", str);
        int count1=0,count2=0,pair=0;

        for (j=0;j<n;j++)
        {
            if (str[j]=='1' && str[j+1]=='0')
            {
                count1++;
            }
        }
        for (j=0;j<n;j++)
        {
            if (str[j]=='0' && str[j+1]=='1')
            {
                count2++;
            }
        }
        pair=count1+count2;

        printf("%d", pair);
    }
    return 0;
}