// 3. Write a function to sort an array of any size. (TSRN)
#include <stdio.h>
int sort(int brr[], int size);
int main()
{
    int size;
    printf("Enter the size:");
    scanf("%d", &size);
    int arr[size];
    sort(arr, size);
    return 0;
}
int sort(int brr[], int size)
{
    int i = 0, temp;
    printf("Enter the values:");
    for (i = 0; i < size; i++)
        scanf("%d", &brr[i]);

    for (int i = 0; i < size; i++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (brr[i] > brr[i + 1])
            {
                temp = brr[i + 1];
                brr[i + 1] = brr[i];
                brr[i] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
        printf("%d", brr[i]);
    return 0;
}