//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{   int i,n,s=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    for(i=1;i<=2*n;i=i+2)
    {
        s=s+i;
    }
    printf("%d",s);
    return 0;
}
