#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h> // Include time.h for random number generation

int main(void) {

    // Declare and initialize the input string
    char input_string[] = "Hello, World!"; 
    char copied_string[50];
    char concatenated_string[100];
    double number = -12.345;
    double absolute_value = fabs(number); // Absolute value of the number

    // Task 2: String Output
    printf("Input String: %s\n", input_string);

    // Task 3: String Length
    printf("\nString Length is: %lu\n", strlen(input_string)); // Corrected

    // Task 4: String Copy
    strcpy(copied_string, input_string);
    printf("Copied String: %s\n", copied_string);

    // Task 5: String Concatenation
    strcpy(concatenated_string, input_string); // Copy input_string to concatenated_string first
    strcat(concatenated_string, copied_string); // Concatenate copied_string to concatenated_string
    printf("Concatenated String: %s\n", concatenated_string);

    // Task 6: Mathematical Calculations
    printf("Absolute value: %.2f\n", absolute_value); // Print absolute value with 2 decimal places

    // Task 7: Random Number Generation
    srand(time(0)); // Initialize random seed with the current time
    int random_number = rand() % 100 + 1; // Generate random number between 1 and 100
    printf("Generated random number: %d\n", random_number);

    /*
    Conclusion: Library Functions Utilized
    1. strlen() - Used to calculate and print the length of the input_string.
    2. strcpy() - Used to copy the content of input_string to copied_string.
    3. strcat() - Used to concatenate copied_string to concatenated_string.
    4. fabs() - Used to calculate the absolute value of a negative floating-point number (-12.345).
    5. rand() - Used to generate a random integer between 1 and 100 (inclusive).
    */

    return 0;
}
