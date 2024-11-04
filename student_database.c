#define CRT_SECURE_NO_WARNINGS // Disable warnings for using unsafe functions
#include <stdio.h>            // Include standard input/output library
#include <stdlib.h>           // Include for general functions like memory allocation
#include <string.h>           // Include for string manipulation functions

#define MAX_STUDENTS 10       // Define the maximum number of students allowed

// Define a structure to represent a Student
struct Student {
    char name[50];           // Array to store the student's name
    int id;                  // Integer to store the student's ID
    float grades[5];         // Array to store the student's grades (up to 5)
    float gpa;               // Float to store the student's GPA
};

struct Student students[MAX_STUDENTS]; // Declare an array of Student structs with a maximum size of MAX_STUDENTS

void addStudent(struct Student *students, int *num_students) { // Function to add a new student
    printf("\nEnter Your Name: "); // Prompt for the student's name
    scanf("%49s", students[*num_students].name); // Read name input (limit to 49 characters)

    printf("\nEnter Your School ID: "); // Prompt for the student's ID
    scanf("%d", &students[*num_students].id); // Read ID input

    for (int i = 0; i < 5; i++) {    // Loop to read grades for the student
        printf("\nEnter Grade #%d :", i + 1); // Prompt for each grade
        scanf("%f", &students[*num_students].grades[i]); // Read grade input
    }

    float sum = 0; // Initialize sum of grades to 0
    for (int i = 0; i < 5; i++) {    // Loop to calculate the total sum of grades
        sum += students[*num_students].grades[i]; // Add each grade to the sum
    }

    students[*num_students].gpa = sum / 5; // Calculate the GPA by dividing the sum by the number of grades
    (*num_students)++; // Increment the count of students

    printf("\nStudent Added Successfully\n");
}

void displayStudents(struct Student *students, int num_students) { // Function to display all students' details
    for (int i = 0; i < num_students; i++) {     // Loop through all students
        printf("\nStudent Name: %s", students[i].name); // Display the student's name
        printf("\nStudent ID: %d", students[i].id);     // Display the student's ID
        
        for (int j = 0; j < 5; j++) {         // Loop to display each student's grades
            printf("\nStudent Grade #%d: %.2f", j + 1, students[i].grades[j]); // Display each grade
        }
        
        printf("\nStudent GPA: %.2f\n", students[i].gpa); // Display the student's GPA
    }
}

void searchStudentByID(struct Student *students, int num_students) { // Function to search for a student by ID
    int search_id; // Variable to store the ID to search for
    printf("Enter Student ID to search: "); // Prompt for ID to search
    scanf("%d", &search_id); // Read ID input

    // Loop through all students to find a matching ID
    for (int i = 0; i < num_students; i++) {      
        if (students[i].id == search_id) { // If ID matches
            // Display the details of the found student
            printf("\nStudent found:\n");
            printf("Name: %s\n", students[i].name);
            printf("ID: %d\n", students[i].id);
            
            for (int j = 0; j < 5; j++) {
                printf("Grade #%d: %.2f\n", j + 1, students[i].grades[j]);
            }
            printf("GPA: %.2f\n", students[i].gpa);
            return; // Exit the function after displaying the details
        }
    }

    // If no matching student ID is found
    printf("Student with ID %d not found.\n", search_id);
}

int main(void) {   // Main function to run the program
    int menu_selection = 0; // Initialize menu selection variable
    int num_students = 0;   // Initialize the number of students

    do {
        printf("\n\nMenu Options:\n"          // Display the menu options
               "\nAdd a new Student (1)"
               "\nDisplay all Students (2)"
               "\nSearch Student by ID (3)"
               "\nExit (0)");

        printf("\nPlease Enter Your Menu Selection: "); // Prompt for menu selection
        scanf("%d", &menu_selection); // Get user input for menu selection

        if (menu_selection == 1) {         // Check which option was selected
            addStudent(students, &num_students); // Call function to add a student
        } 
        else if (menu_selection == 2) {
            displayStudents(students, num_students); // Call function to display all students
        } 
        else if (menu_selection == 3) {
            searchStudentByID(students, num_students); // Call function to search for a student
        } 
        else if (menu_selection != 0) { // Only show this message if not valid
            printf("\nYour Menu Selection is Not Valid. Please Select From Options (1-3)"); // Error message
        }

    } while (menu_selection != 0); // Continue until the user selects 0

    return 0; // Exit the program
}
