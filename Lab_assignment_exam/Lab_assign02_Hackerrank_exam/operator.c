#include <stdio.h>

int main()
{

    char str[22];
    scanf("%s", str);
    int a,b;
    scanf("%d %d", &a, &b);

    int i,sum=0,sum1=0,sum2=0,temp=0;
    for(i=0;i<=22;i++)
    {
        if (str[i]=='+')
        {
            temp=a+b;
            sum1+=temp;
        }
        if (str[i]=='*')
        {
            temp=a*b;
            sum2+=temp;

        }
    }
    sum=sum1+sum2;
    printf("%d",sum);
    return 0;
}