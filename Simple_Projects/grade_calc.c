#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_STUDENTS 25
#define MAX_GRADES_PER_STUDENT 5

int main(void) {

    int num_students, num_grades_per_student;
    float grade = 0;
    float sum = 0;
    float average;

    // Input number of students
    do {
        printf("Enter amount of students: ");
        scanf("%d", &num_students);

        if (num_students > MAX_STUDENTS || num_students <= 0) {
            printf("\nError. Please enter an amount within range 1-25.\n");
        }

    } while (num_students > MAX_STUDENTS || num_students <= 0);

    // Input number of grades per student
    do {
        printf("\nEnter amount of grades per student (max 5): ");
        scanf("%d", &num_grades_per_student);

        if (num_grades_per_student > MAX_GRADES_PER_STUDENT || num_grades_per_student <= 0) {
            printf("Error. Please enter an amount within range 1-5.\n");
        }

    } while (num_grades_per_student > MAX_GRADES_PER_STUDENT || num_grades_per_student <= 0);

    // Loop over each student
    for (int i = 0; i < num_students; i++) {
        sum = 0; // Reset sum for each student

        printf("\nStudent %d:\n", i + 1);

        // Loop over each grade for the current student
        for (int j = 0; j < num_grades_per_student; j++) {
            do {
                printf("Enter grade %d: ", j + 1);
                scanf("%f", &grade);

                if (grade > 100 || grade < 0) {
                    printf("Error. Please enter a grade within range 0-100.\n");
                }
            } while (grade > 100 || grade < 0);

            sum += grade; // Add grade to the sum
        }

        // Calculate and print average
        average = sum / num_grades_per_student;
        printf("Average Grade: %.2f\n", average);

        // Determine and print the letter grade
        if (average >= 90) {
            printf("Letter Grade: A\n");
        } else if (average >= 80) {
            printf("Letter Grade: B\n");
        } else if (average >= 70) {
            printf("Letter Grade: C\n");
        } else if (average >= 60) {
            printf("Letter Grade: D\n");
        } else {
            printf("Letter Grade: F\n");
        }
    }

    return 0;
}
