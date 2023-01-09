#include <stdio.h>
int main()
{   
    // string er kettre '&' use korte hoy na, ar string hosse char of collection; 
    char name [15];
    scanf("%s",name);
    //string er scanf input sudu ekta case hobe
  // fgets(name,sizeof(name),stdin);
  //But fgets er jonno ja ase tai print hbe,

    printf("My name is %s", name); 
    return 0;
}