#include<stdio.h>
int deleteAtBegning(int a[],int n){
    if (n==0){
        printf("arr is empty\n");
        return n;
    }else{
        printf("deleted from beg\n",a[0]);
        for(int i=1;i<n;i++){
            a[i-1]=a[i];
        }
    }return n-1;
}
int deleteAtEnd(int a[],int n){
    if (n==0){
        printf("arr is empty\n");
        return n;
    }else{
        printf("%ddeleted from end.\n",a[n-1]);
        return n-1;
    }
}

    
