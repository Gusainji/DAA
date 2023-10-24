#include<stdio.h>
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int arr[],int n)
{
    int i,j;
    for(i = 0;i < n-1;i++)
    {
        for(j = 0;j < n-1;j++)
        {
            if(arr[j] < arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void print(int arr[],int size)
{
    for(int i = 0;i < size;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    print(arr,n);
    return 0;
}