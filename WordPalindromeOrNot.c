#include <stdio.h>
#include <string.h>
int main() {
    char word[100];
    int i, len, isPalindrome = 1;
    scanf("%s", word);

    len = strlen(word);

    for (i = 0; i < len / 2; i++) {
        if (word[i] != word[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
