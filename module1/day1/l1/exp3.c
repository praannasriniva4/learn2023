#include <stdio.h>


int calculate_total(int physics_marks, int math_marks, int chemistry_marks) {
    return physics_marks + math_marks + chemistry_marks;
}


int calculate_percentage(int total_marks) {
    return (total_marks / 300) * 100;
}

int main() {
    int roll_no;
    char name[50];
    int physics_marks, math_marks, chemistry_marks;

    printf("Enter Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Physics Marks: ");
    scanf("%d", &physics_marks);
    printf("Enter Math Marks: ");
    scanf("%d", &math_marks);
    printf("Enter Chemistry Marks: ");
    scanf("%d", &chemistry_marks);

    int total_marks = calculate_total(physics_marks, math_marks, chemistry_marks);
    int percentage = calculate_percentage(total_marks);

    printf("\n--- Student Summary ---\n");
    printf("Roll No: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", physics_marks);
    printf("Math Marks: %d\n", math_marks);
    printf("Chemistry Marks: %d\n", chemistry_marks);
    printf("Total Marks: %d\n", total_marks);
    printf("Percentage: %d\n", percentage);

    return 0;
}