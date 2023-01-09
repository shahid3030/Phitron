#include <stdio.h>
int main()
{   
    char s [1000];
 //  scanf("%s",name);
    fgets(s,sizeof(s),stdin);

    int i,counter=0;
    while(s[i]!='\0')
    {   
        if(s[i]=='a')
        counter++;
        
        else if(s[i]=='e')
        counter++;
        
        else if(s[i]=='i')
        counter++;
        
        else if(s[i]=='o')
        counter++;
        
        else if(s[i]=='u')
        counter++;
        
        else if(s[i]=='A')
        counter++;
        
        else if(s[i]=='E')
        counter++;
        
        else if(s[i]=='I')
        counter++;
        
        else if(s[i]=='O')
        counter++;
        
        else if(s[i]=='U')
        counter++;
        i++;
    }
    printf(" No. of vowel is=%d", counter); 
    return 0;
}