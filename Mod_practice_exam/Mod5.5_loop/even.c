#include<stdio.h>

// Write a program in C to display the n terms of even natural number 

//Input number of terms : 5             The even numbers are :2 4 6 8 10

int main()
{
    int n,i;
    printf("Take one positive integers: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {   
        
        printf("%d ",2*i);
    }

    return 0;
}