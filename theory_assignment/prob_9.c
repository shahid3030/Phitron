#include<stdio.h>
#include<conio.h>
int main()
{
    int m[3][3], i, j, trans[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    // Transposing the Matrix...
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            trans[j][i] = m[i][j];
        }
    }
    printf("Transpose of given Matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d  ", trans[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}