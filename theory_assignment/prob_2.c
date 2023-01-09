#include<stdio.h>

int main()
{
    int i=0;
    while(i<10)
    {
        printf("I am inside the loop\n");
        i++;
//        break;
    }
}
/*
Here, we initialized that i=0 and 
the condition_expression is i<10,
which means the condition always true and
the loop will run for infinite times.
The solution to come out from infinite loop is
use of break statement.
*/                                  