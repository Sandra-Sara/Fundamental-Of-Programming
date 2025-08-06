#include <stdio.h>
int main() {
    int N, M;
    // Read the dimensions of the matrix
    printf("Enter the number of rows (N) and columns (M): ");
    scanf("%d %d", &N, &M);
    int arr[N][M];
    // Read the input matrix
    printf("Enter the matrix values:\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // Create and print the cipher image
    printf("Cipher Image:\n");
    for(int i = 0; i < N; i++) {
        if(i % 2 == 1) {  // Reverse the order of elements in the odd rows
            for(int j = M - 1; j >= 0; j--) {
                printf("%d ", arr[i][j]);
            }
        } else {  // Print elements in the same order for even rows
            for(int j = 0; j < M; j++) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}
