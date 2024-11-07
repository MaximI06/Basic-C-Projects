/*PART 1: 
Create a C program that calculates the final grade of a student based on their scores in three
exams. The program should prompt the user to enter the scores for each exam, compute the
average score, determine the corresponding letter grade based on predefined criteria, and display
both the average score and the letter grade.*/

/*PART 2:
Create a C program that calculates the Body Mass Index (BMI) based on a person's weight (in
kilograms) and height (in meters). The program should prompt the user to enter their weight and
height, compute the BMI using the formula, and then display the BMI along with its
interpretation*/

#define _CRT_SECURE_NO_WARNINGS  // Define macro to suppress warnings for using scanf() and similar functions
#include <stdio.h>  // Include standard input-output header

int main(void) {  // Main function begins

    char decider_variable;  // Variable to store the user's selection for calculator type

    // Declare variables to store exam scores and the average score
    float exam1_score, exam2_score, exam3_score, average_score;

    // Declare variables to store weight, height, and BMI
    float weight, height, bmi;

    // Prompt the user for their selection
    printf(
        "\nPlease select what you would like to use:\n"
        "For Grade Calculator enter (G)\n"
        "For BMI Calculator enter (B)\n"
        "Enter your selection here:  "
    );

    // Read the user's selection (character) and handle whitespace
    scanf(" %c", &decider_variable);  // Space before %c to handle newline issue

    // Switch statement to handle the user's selection
    switch (decider_variable)
    {
    case 'G':  // If user selects 'G' or 'g'
    case 'g':

        // Prompt the user for their first exam score and read the input
        printf("\nEnter score for Exam 1 (out of 100):  ");
        scanf("%f", &exam1_score);
        // Validate the score to ensure it is between 0 and 100
        if (exam1_score < 0 || exam1_score > 100) {
            printf("\nInvalid score! Please enter a score between 0 and 100.\n");
            return 1;  // Exit if the input is invalid
        }

        // Prompt the user for their second exam score and read the input
        printf("\nEnter score for Exam 2 (out of 100):  ");
        scanf("%f", &exam2_score);
        // Validate the score
        if (exam2_score < 0 || exam2_score > 100) {
            printf("\nInvalid score! Please enter a score between 0 and 100.\n");
            return 1;  // Exit if the input is invalid
        }

        // Prompt the user for their third exam score and read the input
        printf("\nEnter score for Exam 3 (out of 100):  ");
        scanf("%f", &exam3_score);
        // Validate the score
        if (exam3_score < 0 || exam3_score > 100) {
            printf("\nInvalid score! Please enter a score between 0 and 100.\n");
            return 1;  // Exit if the input is invalid
        }

        // Calculate the average score based on the three exam scores
        average_score = (exam1_score + exam2_score + exam3_score) / 3;

        // Determine the grade based on the average score and display the result
        if (average_score <= 100 && average_score >= 90) {
            // Display grade A
            printf(
                "\nGrade Calculator: \n"
                "\n-------------------------\n"
                "\nAverage Score: %.2f \n"
                "\nLetter Grade: A\n"
                "\n-------------------------\n"
                , average_score
            );

        } else if (average_score < 90 && average_score >= 80) {
            // Display grade B
            printf(
                "\nGrade Calculator: \n"
                "\n-------------------------\n"
                "\nAverage Score: %.2f \n"
                "\nLetter Grade: B\n"
                "\n-------------------------\n"
                , average_score
            );

        } else if (average_score < 80 && average_score >= 70) {
            // Display grade C
            printf(
                "\nGrade Calculator: \n"
                "\n-------------------------\n"
                "\nAverage Score: %.2f \n"
                "\nLetter Grade: C\n"
                "\n-------------------------\n"
                , average_score
            );

        } else if (average_score < 70 && average_score >= 60) {
            // Display grade D
            printf(
                "\nGrade Calculator: \n"
                "\n-------------------------\n"
                "\nAverage Score: %.2f \n"
                "\nLetter Grade: D\n"
                "\n-------------------------\n"
                , average_score
            );

        } else if (average_score < 60) {
            // Display grade F
            printf(
                "\nGrade Calculator: \n"
                "\n-------------------------\n"
                "\nAverage Score: %.2f \n"
                "\nLetter Grade: F\n"
                "\n-------------------------\n"
                , average_score
            );
        }

        break;  // Exit the switch statement after processing the grade calculator

    case 'B':  // If user selects 'B' or 'b'
    case 'b':
        
        // Prompt the user for their weight in kilograms
        printf("\nEnter your weight in kilograms:  ");
        scanf("%f", &weight);
        // Validate the weight
        if (weight <= 0) {
            printf("\nInvalid weight! Please enter a valid number.\n");
            return 1;  // Exit if the input is invalid
        }

        // Prompt the user for their height in meters
        printf("\nEnter your height in meters:  ");
        scanf("%f", &height);
        // Validate the height
        if (height <= 0) {
            printf("\nInvalid height! Please enter a valid number.\n");
            return 1;  // Exit if the input is invalid
        }

        // Calculate BMI using the formula: weight / (height * height)
        bmi = weight / (height * height);

        // Determine the BMI category and display the result
        if (bmi < 18.5) {
            // Underweight category
            printf(
                "\nBMI Calculator: \n"
                "\n-------------------------\n"
                "\nYour BMI: %.2f \n"
                "\nYou are Underweight\n"
                "\n-------------------------\n"
                , bmi
            );  

        } else if(bmi >= 18.5 && bmi < 25) {
            // Normal weight category
            printf(
                "\nBMI Calculator: \n"
                "\n-------------------------\n"
                "\nYour BMI: %.2f \n"
                "\nYou are Normal Weight\n"
                "\n-------------------------\n"
                , bmi
            );  

        } else if(bmi >= 25 && bmi < 30) {
            // Overweight category
            printf(
                "\nBMI Calculator: \n"
                "\n-------------------------\n"
                "\nYour BMI: %.2f \n"
                "\nYou are Overweight\n"
                "\n-------------------------\n"
                , bmi
            );           

        } else if(bmi >= 30) {
            // Obese category
            printf(
                "\nBMI Calculator: \n"
                "\n-------------------------\n"
                "\nYour BMI: %.2f \n"
                "\nYou are Obese\n"
                "\n-------------------------\n"
                , bmi
            );  
        }

        break;  // Exit the switch statement after processing the BMI calculator

    default:  // Handle invalid selections
        printf("Your selection is not valid, Please try again :(");
        break;  // Exit the switch statement

    }

    return 0; // End the program and return control to the operating system
}


