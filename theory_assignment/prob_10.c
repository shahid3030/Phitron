#include<stdio.h>

int grade (int marks, char *ch)
{
     if(marks>=0 && marks<=39)
    {
        ch[0]='F';
    }
    else if(marks>=40 && marks<=59)
    {
        ch[0]='C';
    }
    else if(marks>=60 && marks<=79)
    {
        ch[0]='B';
    }
    else if (marks>=80 && marks<=100)
    {
        ch[0]='A';
    }
}

int main ()
{
    int marks;
    char Grade[5];
    printf("Enter the marks: ");
    scanf("%d",&marks);

    grade (marks,Grade);
    printf("The Grade is:%c",Grade[0]);
    return 0;
}