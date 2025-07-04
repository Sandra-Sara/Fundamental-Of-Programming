#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
void primeFactors(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            while (n % i == 0) {
                printf("%d ", i);
                n /= i;
            }
        }
    }
    printf("\n");
}
int main() {
    int num;
    scanf("%d", &num);
    if (num <= 1)
        printf("No prime factors.\n");
    else 
        primeFactors(num);
    return 0;
}

