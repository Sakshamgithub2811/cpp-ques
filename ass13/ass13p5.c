//5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sumDig(int);
int main()
{
    int n,k;
    printf("Enter the number:");
    scanf("%d",&n);
    k=sumDig(n);
    printf("%d",k);
    return 0;
}
int sumDig(int n)
{
    int s;
    if(n==1)
    return 1;
    else
    {
        s=(n%10)+sumDig(n/10);
        return s;
    }
}
