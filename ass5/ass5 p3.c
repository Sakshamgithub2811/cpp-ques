// Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the Number :");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\n",N);
        N--;
    }
    return 0;
}
