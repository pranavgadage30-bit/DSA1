//Quick sort
#include <stdio.h>

// Swap using indices (no pointers)
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Partition function
int partition(int arr[], int start, int end) {
    int pivot = arr[end];   // last element as pivot
    int i = start - 1;      // smaller element index
    
    for (int j = start; j < end; j++) {
        // if element is smaller than pivot
        if (arr[j] < pivot) {
            i++;
            swap(arr, i, j);
        }
    }

    // place pivot at correct position
    swap(arr, i + 1, end);

    return i + 1;   // return pivot index
}

// Quick Sort function
void quicksort(int arr[], int start, int end) {

    if (start < end) {

        int pi = partition(arr, start, end);

        // sort left part
        quicksort(arr, start, pi - 1);

        // sort right part
        quicksort(arr, pi + 1, end);
    }
}

// Main function
int main() {
    int arr[] = {2, 4, 5, 1, 3};
    int n = 5;

    quicksort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

//SELECTION SORT
#include<stdio.h>

int main(){
    int arr[]={2,3,5,1,4};
    int n=5;

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[min])
            min=j;
        }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
    }

    printf("sorted array:");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }     
}

//MERGE SORT
#include<stdio.h>

void divideAndConquer(int arr[],int left,int right,int mid){
    int i,j,k;

    int n1=mid-left+1;
    int n2=right-mid;

    int L[n1],R[n2];

    for(i=0;i<n1;i++){
        L[i]=arr[left+i];
    }

    for(j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }

    i=0;j=0;k=left;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;

        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);

        divideAndConquer(arr,left,right,mid);
    }
}

int main(){
    int arr[]={2,5,4,3,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,len-1);

    printf("sorted array:");
    for(int i=0;i<len;i++){
            printf("%d ",arr[i]);
        }   
}
