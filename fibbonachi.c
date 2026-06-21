#include<stdio.h>
int fibbonacci(int n);
int main(){
   int n,i;
   printf("enter the number \n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
    printf("%d",fibbonacci(i));}

     
}
int fibbonacci(int n){
    if(n==0){
        return 0;

    }
    if(n==1){
        return 1;
    }else{
        return fibbonacci(n-1)+fibbonacci(n-2);
    }
}


