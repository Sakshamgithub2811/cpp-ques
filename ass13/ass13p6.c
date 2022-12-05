//6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int);
int main()
{
    int n,k;
    printf("Enter the number:");
    scanf("%d",&n);
    k=fact(n);
    printf("%d",k);
    return 0;
}
int fact(int n)
{
    int f;
    if(n==1)
    return 1;
    else
    {  
        f=n*fact(n-1);
        return f;
    }
}