//1. Write a recursive function to print first N natural numbers
#include<stdio.h>
int print(int n);
int main()
{   int n;
    printf("Enter the number:");
    scanf("%d",&n);
    print(n);
    return 0;
}
int print(int n)
{
    if(n==0)
        return 1;
    else
    {
        print(n-1);
        printf("%d",n);
    }
}
