#include<stdio.h>
//Qs: Elephant steps:Codeforces problem no.617A
int main()
{   
    int n;
    scanf("%d",&n);
    int step;

   step = (n/5)+(n%5!=0);
    printf("%d\n",step);
    return 0;
}