//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest(int b[],int size);
int main()
{
    int size,k;
    printf("Enter the number:");
    scanf("%d",&size);
    int a[size];
    k=greatest(a,size);
    printf("%d",k);
    return 0;
}
int greatest(int b[],int size)
{   int g1=b[0];
    printf("Enter the array %d elemtns",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(g1<b[i])
        {
            g1=b[i];
        }
    }
   
    return g1;
}
