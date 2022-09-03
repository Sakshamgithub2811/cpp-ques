//Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i*i*i;
    }
    printf("%d",s);
    return 0;
}
