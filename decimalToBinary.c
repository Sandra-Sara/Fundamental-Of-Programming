#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2); // Recursively divide n by 2
    }
    printf("%d", n % 2); // Print the remainder (0 or 1)
}

int main() {
    int number;
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    
    printf("Binary representation: ");
    decimalToBinary(number); // Call the function to print binary
    printf("\n");

    return 0;
}
