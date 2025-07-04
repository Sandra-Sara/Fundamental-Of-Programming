#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++) {
        scanf("%d",&arr[i]);
    }
    int sumOfElement = 0;
    for(int i = 0;i < n;i++){
          sumOfElement = sumOfElement+arr[i];
    }
    printf("%d",sumOfElement);
    return 0;
}