#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int arr1size = 5, arr2size = 5;
    int i, j;
    
    printf("Common elements: ");
    for (i = 0; i < arr1size; i++) {
        for (j = 0; j < arr2size; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
            }
        }
    }
    
    return 0;
}
