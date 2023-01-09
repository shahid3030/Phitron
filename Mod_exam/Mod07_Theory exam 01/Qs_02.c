#include<stdio.h>

int main()
{   
    int a,b,c,d;
    
    printf("Enter the four integers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d)
    {
        printf("\nLargest = %d",a);   
    }
    if(b>a && b>c && b>d)
    {
        printf("\nLargest = %d",b);   
    }
    if(c>a && c>b && c>d)
    {
        printf("\nLargest = %d",c);   
    }
      if(d>a && d>b && d>c)
    {
        printf("\nLargest = %d",d);   
    }
    if(a<b && a<c && a<d)
    {
        printf("\nSmallest = %d",a); 
    }
    if(b<a && b<c && b<d)
    {
        printf("\nSmallest = %d",b); 
    }
    if(c<a && c<b && c<d)
    {
        printf("\nSmallest = %d",c); 
    }
    if(d<a && d<b && d<c)
    {
        printf("\nSmallest = %d",d); 
    } 
    return 0;
}