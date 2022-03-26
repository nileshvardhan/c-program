#include<stdio.h>
int main()
{
   char str[1000],ch;
   int count=0;
   printf("Enter the string\n");
   gets(str,sizeof(str),stdin);
   printf("Enter a character to find its occurence\n");
   scanf("%c",ch);
   for(int i=0;str[i]!='\0';++i)
   {
        if(ch==str[i])
        ++count;
        
        }
        printf("occurence of %c=%d",ch,count);
        return 0;
     }   
        
