//Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the number :");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
