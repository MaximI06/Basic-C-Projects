#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main(void) {

    float num;

    printf("Please enter a number greater than 0: ");
    scanf("%f", &num);  // Use double quotes here for the format specifier

    if(num <= 0) {
        printf("You have entered an invalid number\n");
    } else { 
        while(num > 0) { 
            printf("%f\n", num);  // Print the number followed by a new line for clarity
            num--;  // Decrement num by 1
        }
    }

    return 0;
}

