#include<stdio.h>
 
int main() {
   int matrix[3][3];
   int row, column = 0;
   int sum, sum1, sum2;
   int flag = 0;
 
 
   for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++)
         scanf("%d", &matrix[row][column]);
   }

   //For diagonal elements
   sum = 0;
   for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
         if (row == column)
            sum = sum + matrix[row][column];
      }
   }
 
   //For Rows
   for (row = 0; row < 3; row++) {
      sum1 = 0;
      for (column = 0; column < 3; column++) {
         sum1 = sum1 + matrix[row][column];
      }
      if (sum == sum1)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }
 
   //For Columns
   for (row = 0; row < 3; row++) {
      sum2 = 0;
      for (column = 0; column < 3; column++) {
         sum2 = sum2 + matrix[column][row];
      }
      if (sum == sum2)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }
 
   if (flag == 1)
      printf("YES");
   else
      printf("NO");
 
   return 0;
}