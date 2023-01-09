#include<stdio.h>

int main()
{   
    char name[100];
    fgets(name,sizeof(name),stdin);

    int i,count=0;
    for(i=1;name[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}