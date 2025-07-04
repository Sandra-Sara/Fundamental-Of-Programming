#include <stdio.h>
#include <stdbool.h>
int countDistinct(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for(int j = 0; j < i; j++) { // j<i to check only previous elements
            if(arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int distinctCount = countDistinct(arr, n);
    printf(distinctCount);
    return 0;
}
