//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int small(int b[] ,int size);
int main()
{
    int size,k;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size];
    small(a,size);
}
int small(int b[],int size)
{
    int  s1=b[0];
      printf("Enter the array %d elemtns\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(s1>b[i])
        {
            s1=b[i];
        }
    }
    printf("%d",s1);
}
