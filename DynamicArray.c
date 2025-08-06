#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;
    int size;
    int capacity;
} DynamicArray;

// Function to initialize the dynamic array
void initArray(DynamicArray *dArray) {
    dArray->size = 0;
    dArray->capacity = 2;  // Initial capacity
    dArray->arr = (int *)malloc(dArray->capacity * sizeof(int));
}

// Function to resize the array when needed
void resizeArray(DynamicArray *dArray) {
    dArray->capacity *= 2;  // Double the capacity
    dArray->arr = (int *)realloc(dArray->arr, dArray->capacity * sizeof(int));
}

// Function to insert a value into the dynamic array in ascending order
void insert(DynamicArray *dArray, int value) {
    // Resize if the array is full
    if (dArray->size == dArray->capacity) {
        resizeArray(dArray);
    }
    
    // Insert value in ascending order
    int i = dArray->size - 1;
    while (i >= 0 && dArray->arr[i] > value) {
        dArray->arr[i + 1] = dArray->arr[i]; // Shift element to the right
        i--;
    }
    dArray->arr[i + 1] = value;  // Insert the value in the correct position
    dArray->size++;
}

// Function to display the elements of the array
void display(DynamicArray *dArray) {
    for (int i = 0; i < dArray->size; i++) {
        printf("%d ", dArray->arr[i]);
    }
    printf("\n");
}

int main() {
    DynamicArray dArray;
    initArray(&dArray);  // Initialize the dynamic array

    // Insert values
    insert(&dArray, 10);
    insert(&dArray, 5);
    insert(&dArray, 20);
    insert(&dArray, 15);

    // Display the array
    printf("Dynamic Array: ");
    display(&dArray);

    // Free the allocated memory
    free(dArray.arr);

    return 0;
}
