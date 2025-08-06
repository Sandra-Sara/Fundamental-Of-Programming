#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int arr3[], int size3, int result[]) {
    int i = 0, j = 0, k = 0, m = 0;
    // Merge the arrays using a three-pointer technique
    while (i < size1 && j < size2 && k < size3) {
        if (arr1[i] < arr2[j] && arr1[i] < arr3[k]) {
            result[m++] = arr1[i++];
        } else if (arr2[j] < arr1[i] && arr2[j] < arr3[k]) {
            result[m++] = arr2[j++];
        } else {
            result[m++] = arr3[k++];
        }
    }

    // Merge the remaining elements of arr1
    while (i < size1) {
        result[m++] = arr1[i++];
    }
    // Merge the remaining elements of arr2
    while (j < size2) {
        result[m++] = arr2[j++];
    }
    // Merge the remaining elements of arr3
    while (k < size3) {
        result[m++] = arr3[k++];
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int arr3[] = {0, 7, 8};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    
    int result[size1 + size2 + size3];
    
    mergeArrays(arr1, size1, arr2, size2, arr3, size3, result);
    
    printf("Merged array: ");
    printArray(result, size1 + size2 + size3);
    
    return 0;
}
