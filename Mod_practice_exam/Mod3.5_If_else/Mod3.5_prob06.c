#include<stdio.h>

int main()
{
   int c,x,y;
   printf("Enter the marks: ");
   scanf("%d %d",&x,&y);

   c = 100;


   if(x+y>=c)
   {
      printf("YES");
   }
   else
   {
      printf("NO");
   }
   return 0;
}
