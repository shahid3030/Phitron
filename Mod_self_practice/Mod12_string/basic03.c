#include <stdio.h>
int main()
{
    char name[15]="Sidrat Muntaha";

    name[1] = 'a';
    name[14] = 'G';
    name[15] = '\0';

    printf("My name is %s", name);
    return 0;
}