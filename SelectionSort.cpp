#include<stdio.h>

void selectionSort(int arr[],int size);

int main()
{
    int arr[] = {5,4,3,6,7,2,1};
    int size = sizeof(arr)/sizeof(int);
    int i;
    selectionSort(arr,size);
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

}
void selectionSort(int arr[],int size)
{
    int i,j,smallerNumber;

    for(i = 0; i<size; i++)
    {
        int index= i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j] < arr[index] ){
                index = j;
            }

        }
        smallerNumber = arr[index];
        arr[index] = arr[i];
        arr[i] = smallerNumber;

    }

}
