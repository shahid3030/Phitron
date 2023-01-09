#include<stdio.h>

int main()
{   
    long long int n;
    scanf("%lld",&n);
    long long int hs=(n*(n-1)/2);
    printf("%lld",hs);
    return 0;
}