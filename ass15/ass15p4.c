/*5. Write a function to find the first occurrence of adjacent duplicate values in the array. 
Function has to return the value of the element.*/
#include<stdio.h>
int duplicate(int brr[],int size);
int main()
{
    int size,k;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    k=duplicate(arr,size);
    printf("%d",k);
}
int duplicate(int brr[],int size)
{
    int i;
    printf("Enter the array values :");
    for(int i=0;i<size;i++)
    scanf("%d",&brr[i]);
    for(i=0;i<size;i++)
    {
        if(brr[i]==brr[i+1])
        {
            break;
        }
    }
    return brr[i];
    
}
