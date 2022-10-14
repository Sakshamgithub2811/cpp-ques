//1. Write a program to find the Nth term of the Fibonnaci series.
//1-10112358
#include<stdio.h>
int main()
{
   int i,a=-1,b=1,c,n;
   printf("Enter the number:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       c=a+b;
       a=b;
       b=c;
   }
   printf("%d",c);
   return 0;


}
