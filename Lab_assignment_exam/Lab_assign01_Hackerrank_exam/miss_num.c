#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
   
    int sum, a, b, c;
    int mn;

    for (i = 0; i < n; i++)
    {   
       
        scanf("%d %d %d %d", &sum, &a, &b, &c);
        mn = sum - (a + b + c);
        printf("%d", mn);
        printf("\n");
    }

    

    return 0;
}
