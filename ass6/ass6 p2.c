//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<=2*n;i=i+2)
    {
        s=s+i;
    }
    printf("sum of n even natural numbers:%d",s);
    return 0;
}
