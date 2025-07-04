#include <stdio.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n], unique[n];
    int isDuplicate, uniqueCount = 0;
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        isDuplicate = 0;
        for(int j = 0; j < uniqueCount; j++) {
            if(arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }
    printf("After removing duplicates:\n");
    for(int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    return 0;
}
