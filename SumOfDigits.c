#include<stdio.h>

int main(){
 int n,r,sum=0;
 printf("Enter the digit");
 scanf("%d" , &n);

 while(n!=0){
    r=n%10;
    sum+=r;
    n=n/10;
 }
 printf("%d" ,sum);

}
