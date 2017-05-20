#include<stdio.h>
#include<stdbool.h>

int main()
{
    int arr[] = {12,9,7,16,8,6,3};
    int size = sizeof(arr)/sizeof(int);
    int i,j;

    for(i=0; i<size; i++)
    {   bool isLeader = true;
        for(j=i+1; j<size; j++)
        {
            if(arr[j] > arr[i])
            {
                isLeader = false;
                break;
            }

        }
        if(isLeader)
        {
            printf("%d ",arr[i]);
        }

    }
}
