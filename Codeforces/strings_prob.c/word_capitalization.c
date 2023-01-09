#include <stdio.h>
#include <string.h>

int main()
{
    char name[1000];

    fgets(name, sizeof(name), stdin);

    int i;

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[0] >= 'a' && name[0] <= 'z')
            name[0] -= 32;
    }
    printf("%s", name);

    return 0;
}