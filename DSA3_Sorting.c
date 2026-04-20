// Sorting Techniques !
// To sort the array. There are various techniques with different time
// complexity

// Bubble sort, Seelciton sort, Insert sort, quick sort, Merge sort , Heap sort,
// radix sort

// 1.Bubble sort

#include <stdio.h>
int main() {
  int i, j;
  int arr[] = {4, 5, 3, 1, 2};
  //           0 1 2 3 4
  // For iteration count for bubble sort = length ** 2
  int len = sizeof(arr) / sizeof(arr[0]);

  printf("Before Sorting: ");
  for (i = 0; i < len; i++) {
    printf(" %d", arr[i]);
  }

  // Sorting
  for (i = 0; i < len; i++) {
    for (j = 0; j < len; j++) {
      if (arr[j] > arr[j + 1]) {
        // swap code
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf("\nAfter Sorting:  ");
  for (i = 0; i < len; i++) {
    printf(" %d", arr[i]);
  }
}


//2.Quick sort
#include <stdio.h>

// Swap function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);  // pass address
        }
    }
    i++;
    swap(&arr[i], &arr[end]);

    return i;
}

// Quick Sort
void quicksort(int arr[], int start, int end) {
    if (start < end) {
        int pi = partition(arr, start, end);

        quicksort(arr, start, pi - 1);
        quicksort(arr, pi + 1, end);
    }
}

// Main function
int main() {
    int arr[] = {2, 5, 4, 1, 3};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Before Sorting: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    quicksort(arr, 0, len - 1);

    printf("\nAfter Sorting: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}