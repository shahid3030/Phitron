#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    for (i=2; i<n; i++)
    {
        if (n%i==0)
        {
            printf ("Composite");
            break;
        }
        else
        {
            printf ("Prime");
            break;
        }
    }
    return 0;
}