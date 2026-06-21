// program of binery searching
#include<stdio.h>


int binarySearch(int arr[],int size, int target){
 int start=0,  end= size-1;
 
 while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]== target){
        return mid;
    }else if(arr[mid]<target){
        start= mid +1;
    }else if(arr[mid]>target){
        end=mid-1;
    }
 }
return -1;
}
int insertAtend(int arr[],int size,int capacity,int value){
    if(size==capacity){
        printf("not enough space to enter");
    }else{
        arr[size]=value;
    }return size+1;
}
int insertAtBegning(int arr[],int size,int capacity,int value){
    if(size==capacity){
        printf("not enough space to enter");
    }else{
         for(int i=0;i<=size-1;i--){
            arr[size+1]=arr[i];
            }
        arr[0]=value;
        return size+1;}
}
int insertAtPosition(int arr[],int size,int capacity,int value, int position){
    for(int i=size-1;i<=position-1;i--){
        arr[size+1]=arr[i];
    }
    arr[position]=value;
    return size+1;
}


int main(){int size;int target,value,capacity,position;
    int arr[100];int i;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the elements in the array");
    for(int i=0;i<=size-1;i++){
        scanf("%d",arr[i]);

    }
    int buttun;
    printf("for search an elements in arryy press 1.\n");
    printf("for insert the value at end  in arryy press 2.\n");
    printf("for insert the value at begning in arryy press 3.\n");
    printf("for insert the value at sp.position in arryy press 4.\n");
   
    scanf("%d",&buttun);
    if(buttun==1){
        int result = binarySearch( arr, size, target);

    }else if(buttun==2){
        int  result = insertAtend( arr, size, capacity, value);
    }else if(buttun==3){
         int result = insertAtBegning( arr, size, capacity, value);   
    }else if(buttun==4){
        int result = insertAtPosition( arr, size, capacity, value, position);

    }

    printf("updated array is=d");
    for(int i=0;i<=size;i++){
        printf("%d",arr[i]);
    }
    return 1;


}
