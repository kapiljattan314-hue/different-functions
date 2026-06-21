//conversion of decimal numbers to their binnary numbers
#include<stdio.h>
int deciToBin(int num){
    int ans=0;int pow=1;
    while(num<0){
        int rem=num%2;
        int num=num/2;
        ans+=(rem*pow);
        pow= pow*10;   

    }return ans;
}
int main(){
    int num;
    int bin;
    printf("enter the num to convert into binary");

    scanf("%d",&num);
    bin=deciToBin( num);
    printf("binary number of above is:- %d",bin);
}
