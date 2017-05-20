#include<stdio.h>

void inserionSort(int arr[],int size);

int main()
{
    int arr[] = {5,4,3,6,7,2,1};
    int size = sizeof(arr)/sizeof(int);
    int i;
    inserionSort(arr,size);
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

}
void inserionSort(int arr[],int size)
{
    int i;

    for(i = 0; i<size; i++)
    {
        int key = arr[i];
        int j= i-1;
        while(j > -1 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

}
