#include <stdio.h>
#include <string.h>
void sortDescending(char arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void sortAscending(char arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void getMaximum(char original[], char result[]) {
    int len = strlen(original);
    for (int i = 0; i < len; i++) {
        result[i] = original[i];
    }
    result[len] = '\0';
    sortDescending(result, len);
}
void getMinimum(char original[], char result[]) {
    int len = strlen(original);
    for (int i = 0; i < len; i++) {
        result[i] = original[i];
    }
    result[len] = '\0';
    sortAscending(result, len);
    if (result[0] == '0') {
        for (int i = 1; i < len; i++) {
            if (result[i] != '0') {
                char temp = result[0];
                result[0] = result[i];
                result[i] = temp;
                break;
            }
        }
    }
}
int main() {
    char num[20];
    scanf("%s", num);
    char max[20], min[20];
    getMaximum(num, max);
    getMinimum(num, min);
    printf("Maximum = %s\n", max);
    printf("Minimum = %s\n", min);
    return 0;
}
