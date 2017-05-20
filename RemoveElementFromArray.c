#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(int);
    printf("%d \n",size);
    int i,j,k,n,index=-1;
    for( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("Enter the element to delete ");
    scanf("%d", &n);
    printf("%d " ,n);
    for(i=0; i<size; i++)
    {
        if(arr[i] == n)
        {
            for(j=i ; j < (size - 1); j++)
            {
                arr[j] = arr[j+1];
            }
            index=i;
            break;
        }

    }

    if(index==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("After deletion ");
        for(i = 0; i < ( size - 1) ; i++)
        {
            printf("%d ", arr[i]);
        }
    }


    return 0;
}
