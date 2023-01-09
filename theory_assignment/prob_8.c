#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);

    int n;
    scanf("%d", &n);

    int len, i;
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] + n;
            
            int c = (int) str[i];

            if (c>122)
            {
                c-=26;
                str[i]=(char)c;
            }

        }
    }
    printf("%s", str);
}