#include <stdio.h>
#include <string.h>

int main()
{
    char name[1000];

    fgets(name, sizeof(name), stdin);

    int i;
    int l= strlen(name)-1;
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[l-1] >= 'a' && name[l-1] <= 'z')
            name[l-1] -= 32;
    }
    printf("%s", name);

    return 0;
}