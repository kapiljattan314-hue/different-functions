// to find factorial of a number
#include<stdio.h>
int factorial(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
          fact*= i;
    }return fact;
}
int ncr(int n, int r){
    int fct_n= factorial(n);
    int fct_r= factorial(r);
    int fct_nmr= factorial(n-r);
    return fct_n /(fct_r * fct_nmr);
}
int main(){
    int n;int r;
    printf("enter the value to find the combination:");
    scanf("%d",&n);
    printf("enter the valye of r:");
    scanf("%d",&r);
    printf("max combinatio(ncr) of the no. is:%d", ncr(n, r));
    return 0;
}
