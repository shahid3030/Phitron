#include <stdio.h>
#include <string.h>

int main()
{
    int t, j;
    scanf("%d", &t);

    for (j = 1; j <= t; j++)
    {
        int i, length;
        int flag = 0;
        int count=0;

        char str[20];
        scanf("%s", str);

        length = strlen(str);

        for (i = 0; i < length; i++)
        {
            if (str[i] != str[length - i - 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag==1)
        {
            printf("case #1: Not Palindrome");
        }
        
        else
        {
            if(length<=7)
            {
                printf("case #2: %s", str);
            }
            else
            {
                for(i=1;i<length-1;i++)
                {
                    count++;
                }
                printf("case #3: %c%d%c", str[0], count, str[length-1]);

            }
        }
    }
    return 0;
}
