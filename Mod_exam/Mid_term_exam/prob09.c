#include <stdio.h>

int main()
{

    int n = 11;
    int i, j, temp;
    int ara[11] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    for (i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    
        for (i = 0; i < n - 1; i++)
        {

            if (ara[i] > ara[i + 1])
            {

                temp = ara[i];

                ara[i] = ara[i + 1];

                ara[i + 1] = temp;
            }
        }
        for (i = 0; i < n; i++)
        {

            printf("%d ", ara[i]);
        }

        printf("\n");

          for (i = 0; i < n - 1; i++)
        {

            if (ara[i] > ara[i + 1])
            {

                temp = ara[i];

                ara[i] = ara[i + 1];

                ara[i + 1] = temp;
            }
        }
        for (i = 0; i < n; i++)
        {

            printf("%d ", ara[i]);
        }

        printf("\n");
          for (i = 0; i < n - 1; i++)
        {

            if (ara[i] > ara[i + 1])
            {

                temp = ara[i];

                ara[i] = ara[i + 1];

                ara[i + 1] = temp;
            }
        }
        for (i = 0; i < n; i++)
        {

            printf("%d ", ara[i]);
        }

        printf("\n");
          for (i = 0; i < n - 1; i++)
        {

            if (ara[i] > ara[i + 1])
            {

                temp = ara[i];

                ara[i] = ara[i + 1];

                ara[i + 1] = temp;
            }
        }
        for (i = 0; i < n; i++)
        {

            printf("%d ", ara[i]);
        }

        printf("\n");
          for (i = 0; i < n - 1; i++)
        {

            if (ara[i] > ara[i + 1])
            {

                temp = ara[i];

                ara[i] = ara[i + 1];

                ara[i + 1] = temp;
            }
        }
        for (i = 0; i < n; i++)
        {

            printf("%d ", ara[i]);
        }

        printf("\n");
    
    return 0;
}