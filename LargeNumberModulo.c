#include <stdio.h>
#include <string.h>
#define MOD 100009
// Function to calculate (A + B) % 100009
int largeNumberModulo(char *A, char *B) {
    int lenA = strlen(A), lenB = strlen(B);
    int carry = 0, sum = 0;
    int i = lenA - 1, j = lenB - 1;
    while (i >= 0 || j >= 0 || carry) {
        int digitA = 0, digitB = 0;
        if (i >= 0) digitA = A[i] - '0';
        else if (i < 0) digitA = 0;
        if (j >= 0) digitB = B[j] - '0';
         else if (j < 0) digitB = 0;
        sum = digitA + digitB + carry;
        carry = sum / 10;
        // Add the current digit's contribution to the result modulo 100009
        sum = sum % 10;
        // Use the current digit of the sum to calculate the result modulo
        int result = sum % MOD;
        i--;
        j--;
    }
    return sum % MOD;
}
int main() {
    char A[100001], B[100001];
    // Read the large numbers as strings
    printf("Enter the first large number A: ");
    scanf("%s",A);
    printf("Enter the second large number B: ");
    scanf("%s",B);
    int result = largeNumberModulo(A, B);
    printf("The result of (A + B) %% 100009 is: %d\n", result);
    return 0;
}
