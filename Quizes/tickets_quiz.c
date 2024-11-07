//Question 3. Create a C program that acts as a ticketing system for a small event. 
//The program should prompt the user to enter their age and print out the cost of 
//the ticket according to the following age-based pricing structure:
//Children under 14 years of age get in free.
//Teenagers between 14 and 18 years of age pay a reduced fee of $5.
//Adults between 19 and 64 years of age pay the full price of $20.
//Seniors 65 years and older pay a reduced fee of $10.

//Instructions
//Use appropriate data types for storing age and ticket prices.
//Employ conditional statements to determine the ticket price based on the user's age.
//Make sure to handle input errors gracefully and provide clear output messages.
//Your program should only use conditional statements (if, else-if, else) for the logic.
//Note: You are not required to handle non-numeric input in this exercise. Assume the user will always
//input an integer value for their age.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int age;

    // Prompt the user for their age
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Determine the ticket price based on age
    if (age < 0) {
        // Handle negative age input
        printf("Invalid age entered. Please try again.\n");
    }
    else if (age < 14) {
        // Children under 14 get in free
        printf("Your admission is free.\n");
    }
    else if (age >= 14 && age <= 18) {
        // Teenagers between 14 and 18 pay $5
        printf("Your admission is $5.\n");
    }
    else if (age >= 19 && age <= 64) {
        // Adults between 19 and 64 pay $20
        printf("Your admission is $20.\n");
    }
    else if (age >= 65) {
        // Seniors 65 and older pay $10
        printf("Your admission is $10.\n");
    }

    return 0;
}