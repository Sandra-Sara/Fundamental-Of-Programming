#include <stdio.h>
// Function to calculate the number of prime factors of a number
int prime_factors_count(int n) {
    int count = 0;
    // Count the number of times 2 divides n
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    // Now check for odd factors
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            count++;
            n /= i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        count++;
    }

    return count;
}

// Function to perform sorting based on the number of prime factors
void sort_by_prime_factors(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Compare the number of prime factors
            if (prime_factors_count(arr[i]) > prime_factors_count(arr[j])) {
                // Swap the elements if the first has more prime factors
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input: number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    // Input: the integers
    printf("Enter the integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array based on the number of prime factors
    sort_by_prime_factors(arr, n);

    // Output: sorted integers
    printf("Sorted integers based on the number of prime factors:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
