#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    // Open the file for reading and writing
    file = fopen("input.txt", "r+");
    if (file == NULL) {
        printf("File not found\n");
        return 1;
    }

    // Read each character in the file
    while ((ch = fgetc(file)) != EOF) {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check if the character is a consonant (alphabetic letter excluding vowels)
        else if (isalpha(ch)) {
            consonants++;
        }
        // Check if the character is a digit
        else if (isdigit(ch)) {
            digits++;
        }
        // Check if the character is a special character
        else if (!isspace(ch)) {
            special++;
        }
    }

    // Move the file pointer to the end of the file
    fseek(file, 0, SEEK_END);

    // Write the results to the file
    fprintf(file, "\nVowel: %d\n", vowels);
    fprintf(file, "Consonant: %d\n", consonants);
    fprintf(file, "Digit: %d\n", digits);
    fprintf(file, "Special: %d\n", special);

    // Close the file
    fclose(file);

    printf("Processing complete! Check the file 'input.txt' for the results.\n");
    return 0;
}
