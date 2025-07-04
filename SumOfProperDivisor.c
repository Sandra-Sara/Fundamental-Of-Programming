#include <stdio.h>
int sumOfProperDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    int num;
    scanf("%d", &num);
    if (num <= 1) {
        printf("No proper divisors.\n");
    } else {
        int result = sumOfProperDivisors(num);
        printf(result);
    }
    return 0;
}