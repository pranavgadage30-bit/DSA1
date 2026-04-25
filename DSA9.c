#include <stdio.h>

// Function to get maximum value
int getmax(int arr[], int len) {
    int max = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Counting sort for each digit
void countingsort(int arr[], int len, int exp) {
    int output[len];
    int count[10] = {0};

    // Count occurrences
    for (int i = 0; i < len; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Convert count to cumulative count
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build output array
    for (int i = len - 1; i >= 0; i--) {
        int index = (arr[i] / exp) % 10;
        output[count[index] - 1] = arr[i];
        count[index]--;
    }

    // Copy back to original array
    for (int i = 0; i < len; i++) {
        arr[i] = output[i];
    }
}

// Radix sort function
void radixsort(int arr[], int len) {
    int max = getmax(arr, len);

    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingsort(arr, len, exp);
    }
}

// Main function
int main() {
    int arr[] = {33, 22, 567, 34, 45};
    int n = 5;

    radixsort(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}