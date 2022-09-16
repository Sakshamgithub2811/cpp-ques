// Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    printf("%d",f);
    return 0;
}

