#include <stdio.h>
#include <string.h>
int main()
{
    int n, r = 0, rem;
    scanf("%d", &n);
    char name[22];
    // case:1

    fgets(name, sizeof(name), stdin);

    int l = strlen(name) - 1;
    if (l >= 7)
    {
        printf("%c%d%c", name[0], l - 2, name[l - 1]);
    }
    else
    {
        puts(name);
    }

    return 0;
}