//5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
int printEven(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    n=n*2;
    printEven(n);
    return 0;
}
int printEven(int n)
{
    if(n%2==1)
     n--;
     if(n<=0)
     return 1;
     else
     {
         
         printEven(n-2);
         printf("%d",n);
     }
     
}

