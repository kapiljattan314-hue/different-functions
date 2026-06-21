#include<stdio.h>
#include<conio.h>
int binarySearch(int arr[],int size, int target){
 int start=0,  end= size-1;
 int mid=(start+end)/2;
 while(start<end){
    if(arr[mid]== target){
        return 1;
    }else if(arr[mid]<target){
        start= mid +1;
    }else if(arr[mid]>target){
        end=mid-1;
    }
 }
return -1;
}


int main(){
    int arr[]={ 1,2,3,4,5,6};
    int target =5;
    int result =binarySearch(arr,6,target);
    printf("%d",result);
    return 0;

}