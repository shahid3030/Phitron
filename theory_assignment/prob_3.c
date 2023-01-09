#include <stdio.h>
#include <string.h>

int find_digit(char *s, char ch)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ch)
        {
            return ch;
        }
    }
}

int main()
{
    char s[100];

    gets(s);
    if ((find_digit(s, '1') == '1') &&
        (find_digit(s, '7') == '7') &&
        (find_digit(s, '9') == '9'))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}