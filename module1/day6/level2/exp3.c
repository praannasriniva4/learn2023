#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    float marks;
};

void read_students(struct Student* students, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &(students[i].marks));
    }
}

void write_students(struct Student* students, int n) {
    int i;
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

float calculate_average(struct Student* students, int n) {
    float sum = 0.0;
    int i;
    for (i = 0; i < n; i++) {
        sum += students[i].marks;
    }
    return sum / n;
}

void print_above_average(struct Student* students, int n, float average) {
    int i;
    printf("\nStudents scoring above average marks:\n");
    for (i = 0; i < n; i++) {
        if (students[i].marks > average) {
            printf("%s (Marks: %.2f)\n", students[i].name, students[i].marks);
        }
    }
}

void print_below_average(struct Student* students, int n, float average) {
    int i;
    printf("\nStudents scoring below average marks:\n");
    for (i = 0; i < n; i++) {
        if (students[i].marks < average) {
            printf("%s (Marks: %.2f)\n", students[i].name, students[i].marks);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));

    read_students(students, n);

    float average = calculate_average(students, n);
    printf("\nAverage Marks: %.2f\n", average);

    write_students(students, n);

    print_above_average(students, n, average);
    print_below_average(students, n, average);

    free(students);
    return 0;
}
