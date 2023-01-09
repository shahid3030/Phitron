#include<stdio.h>

int main()
{
    int n;
    printf("Number of chok: ");
    scanf("%d",&n);
    int chok=n;
    int pack=n;
    
    while(pack>=4)
    {
        chok +=(pack/4);
        pack=(pack/4)+(pack%4);
    }

    printf("%d",chok);

    return 0;
}