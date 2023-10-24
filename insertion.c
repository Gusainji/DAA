#include<stdio.h>
void insertion(int arr[],int n)
{
    int i,j,key;
    for(i = 1;i < n;i++)
    {
        key = arr[i];
        j = i-1;    

        while(j >= 0 && arr[j] >= key)
        {
            arr[j + 1] = arr[j];
            j = j-1;
        }
        arr[j + 1] = key;
    }
}
void print(int arr[],int size)
{
    int i;
    for(i = 0;i < size;i++)
    {
        printf("%d  ",arr[i]);
    }
}
int main()
{
    int arr[]  = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr,n);
    print(arr,n);
    return 0;


}