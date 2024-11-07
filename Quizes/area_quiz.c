//Question 1. Complete the C Program for Calculating Circle Area. Below is a starter code for a C program
//that calculates the area of a circle after obtaining the user's name and the circle's radius. Some parts of
//the code are missing. Fill in the missing code to complete the program.


#include <stdio.h>
#define MAX_NAME_LEN 50

int main() {
    char name[MAX_NAME_LEN];
    float radius, area;
    const float pi = 3.14159;

    // Prompt user for their name
    printf("Enter your name: ");
    // write your code here to read the user's name into the name variable.
    scanf("%s", &name);


    // Prompt user for the radius of the circle
    printf("Enter the radius of the circle:");
    // write your code here to read the radius into the radius variable.
    scanf("%f", &radius);


    // Calculate the area of the circle
    // write your code here to calculate the area of the circle and store it.

    area = pi * radius * radius;

    // Print the greeting message with the user's name and the area of the circle
    // write your code here using printf statement to output the result.

    printf("Hi %s, hope all is well. The area of your circle is: %f\n", name, area);


    return 0;
    }