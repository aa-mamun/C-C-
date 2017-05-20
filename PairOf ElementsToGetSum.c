#include<stdio.h>
int main(){
 int arr[] = {12,3,5,8,17,11,9,21,-1};
 int size = sizeof(arr)/sizeof(int);
 int n,i,j;
 printf("Enter the value of sum :");
 scanf("%d" ,&n);
 for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
        if(arr[i] + arr[j] == n){
            printf("%d + %d = %d \n",arr[i] ,arr[j] ,n);
        }
    }
 }

}
