//3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sumEven(int);
int main()
{
    int n,k;
    printf("Enter the number:");
    scanf("%d",&n);
    n=n*2;
    k=sumEven(n);
    printf("%d",k);
    return 0;
}
int sumEven(int n)
{
    int s;
    if(n<=0)
    return 0;
    else
    {
        s=n+sumEven(n-2);
        return s;
    }
}
