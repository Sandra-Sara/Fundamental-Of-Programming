#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[100];
    int roll;
    char address[100];
    char phone[15];
    char email[50];
};
int main() {
    FILE *binFile, *txtFile;
    struct Student student;
    int N;
    binFile = fopen("student.bin", "rb");
    if (binFile == NULL) {
        printf("Error opening binary file!\n");
        return 1;
    }
    fread(&N, sizeof(int), 1, binFile);
    for (int i = 0; i < N; i++) {
        fread(&student, sizeof(struct Student), 1, binFile);
        char filename[20];
        sprintf(filename, "%d.txt", student.roll);
        txtFile = fopen(filename, "w");
        if (txtFile == NULL) {
            printf("Error opening text file for student %d!\n", student.roll);
            continue;
        }
        fprintf(txtFile, "Name: %s\n", student.name);
        fprintf(txtFile, "Roll: %d\n", student.roll);
        fprintf(txtFile, "Address: %s\n", student.address);
        fprintf(txtFile, "Phone: %s\n", student.phone);
        fprintf(txtFile, "Email: %s\n", student.email);
        fclose(txtFile);
    }
    fclose(binFile);
    printf("Student data has been written to text files successfully!\n");
    return 0;
}
