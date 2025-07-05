#include <stdio.h>
#include <string.h>
#include <ctype.h>
void reverse_word(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
}
int main() {
    FILE *file;
    char line[1000], word[100];
    int word_count = 0;
    file = fopen("input.txt", "r+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while (fgets(line, sizeof(line), file)) {
        int i = 0;
        int j = 0;
        while (line[i] != '\0') {
            while (line[i] != '\0' && isspace(line[i])) {
                i++;
            }
            if (line[i] != '\0') {
                j = 0;
                while (line[i] != '\0' && !isspace(line[i])) {
                    word[j++] = line[i++];
                }
                word[j] = '\0';
                word_count++;
                if (word_count % 2 == 0) {
                    reverse_word(word);
                }
                fputs(word, file);
                if (line[i] != '\0') {
                    fputc(' ', file);
                }
            }
        }
    }
    fclose(file);
    printf("File modified successfully!\n");
    return 0;
}
