//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the numbers:");
    scanf("%d",&n);
    odd(n);
    return 0;
}
int odd(int n)
{
    int i;
    for(i=1;i<=n*2;i=i+2)
    {
        printf("%d\n",i);
    }
}
