//2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumOdd(int);
int main()
{
    int k, n;
    printf("Enter the number:");
    scanf("%d",&n);
    n=n*2;
    k=sumOdd(n);
    printf("%d",k);
    return 0;
}
int sumOdd(int n)
{
    int s;
    if(n%2==0)
    n--;
    if(n<=1)
    return 1;
    else
    {
        s=n+sumOdd(n-2);
        return s;
    }
}
