
#include<stdio.h>
#include <stdbool.h>


int main(){
  int n;
  printf("Enter the limit to print prime numbers");
  scanf("%d" , &n);
  int i,j;

  for(i = 2;i<n;i++){
    bool isPrime = 1;
    for(j=2;j<i;j++){
        if( i % j == 0){
            isPrime=0;
        }

    }
     if(isPrime){
            printf("%d ", i);
        }
  }


}
