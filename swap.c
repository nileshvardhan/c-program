#include<stdio.h>
int main()
{
   int a,b;
   a=10;
   b=20;
   printf("Before swap a=%d b=%d\n",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\n After swap a=%d b=%d\n",a,b);
   return 0;
   }
