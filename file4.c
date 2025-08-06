#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int student_id;
    char name[50];
    int admission_year;
    int degree_year;
    double grade_point;
};

void printStudentDetails(FILE *file) {
    struct Student student;
    
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Student ID: %d\n", student.student_id);
        printf("Name: %s\n", student.name);
        printf("Admission Year: %d\n", student.admission_year);
        printf("Degree Year: %d\n", student.degree_year);
        printf("Grade Point: %.2lf\n", student.grade_point);
    }
}

int main() {
    int student_id;
    printf("Enter Student ID: ");
    scanf("%d", &student_id);

    // Construct the filename based on the student id
    char filename[20];
    sprintf(filename, "%d.bin", student_id);

    // Open the binary file
    FILE *file = fopen(filename, "rb");
    
    if (file == NULL) {
        printf("File not found for Student ID %d\n", student_id);
        return 1;
    }

    struct Student student;
    int found = 0;

    // Read the student data from the file
    while (fread(&student, sizeof(struct Student), 1, file)) {
        if (student.student_id == student_id) {
            found = 1;
            printf("Student Details Found:\n");
            printf("Student ID: %d\n", student.student_id);
            printf("Name: %s\n", student.name);
            printf("Admission Year: %d\n", student.admission_year);
            printf("Degree Year: %d\n", student.degree_year);
            printf("Grade Point: %.2lf\n", student.grade_point);
            break;
        }
    }

    if (!found) {
        printf("No student found with ID %d\n", student_id);
    }

    fclose(file);
    return 0;
}
