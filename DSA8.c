//Counting sort 
#include<stdio.h>

void countingSort(int arr[],int len){
    int max=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count[max+1];

    for(int i=0;i<max+1;i++){
        count[i]=0;
    }

    for(int i=0;i<len;i++){
        count[arr[i]]++;
    }

    int index=0;
    for(int i=0;i<max+1;i++){
        while(count[i]>0){
            arr[index++]=i;
            count[i]--;
        }
    }
}

void printArr(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[]={2,1,3,5,4,3,2};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("Before sorting: ");
    printArr(arr,len);
    countingSort(arr,len);
    printf("\nAfter sorting: ");
    printArr(arr,len);

}