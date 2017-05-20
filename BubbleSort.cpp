#include<stdio.h>
void bubbleSort(int arr[],int size)
{

    int i,j,temp;
    for(i=0; i<size; i++)
    {
        for(j=1; j<size; j++)
        {
            if(arr[j-1] > arr[j])
            {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }

    }
}
int main()
{
    int arr[] = {3,1,5,0,12,4};
    int size = sizeof(arr)/sizeof(int);
    int k;

    bubbleSort(arr,size);
    for(k=0; k<size; k++)
    {
        printf("%d ",arr[k]);
    }
}
