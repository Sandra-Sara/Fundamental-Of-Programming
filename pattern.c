#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    // Lower half of the pattern
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
