#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to calculate the average grade
float calculateAverage(float grades[], int numGrades) {
    float sum = 0;
    for (int i = 0; i < numGrades; i++) {
        sum += grades[i];
    }
    return sum / numGrades;
}

// Function to print the student ID and average grade
void printStudentInfo(int studentID, float averageGrade) {
    printf("Student ID: %d, Average Grade: %.2f\n", studentID, averageGrade);
}

// Function to parse the student record from a line of input
void parseStudentRecord(char *inputLine, int *studentID, float grades[], int *numGrades) {
    char *token = strtok(inputLine, " ");
    *studentID = atoi(token);  // Extract student ID

    // Extract grades
    *numGrades = 0;
    while ((token = strtok(NULL, " ")) != NULL) {
        grades[*numGrades] = atof(token);  // Convert to float and store
        (*numGrades)++;
    }
}

// Main function to read input, compute average grades, and print the results
int main() {
    char inputLine[256];  // Buffer to read input line
    int studentID;
    float grades[10];     // Assuming a max of 10 grades per student
    int numGrades;

    // Ask the user for input until they choose to stop
    while (1) {
        printf("Enter student ID followed by grades (or type 'exit' to stop):\n");
        fgets(inputLine, sizeof(inputLine), stdin);

        // Check if the user wants to exit
        if (strncmp(inputLine, "exit", 4) == 0) {
            break;
        }

        // Parse the input and calculate average
        parseStudentRecord(inputLine, &studentID, grades, &numGrades);
        float average = calculateAverage(grades, numGrades);
        printStudentInfo(studentID, average);
    }

    return 0;
}
