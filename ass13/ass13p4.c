//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sumSq(int);
int main()
{
    int n,k;
    printf("ENter the number:");
    scanf("%d",&n);
    k=sumSq(n);
    printf("%d",k);
    return 0;
}
int sumSq(int n)
{
    int s;
    if(n==1)
    return 1;
    else
    {
        s=n*n+sumSq(n-1);
    }
}