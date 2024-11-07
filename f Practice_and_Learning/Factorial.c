#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int n, og_num;
    unsigned long long sum = 1;  // Factorials grow large, so use a larger data type

    // Input validation loop
    do {
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &n);

        if (n > 100 || n <= 0) {
            printf("Please enter a number within the range of 1 to 100.\n");
        }
    } while (n > 100 || n <= 0);

    og_num = n;  // Store the original number for later use

    // Factorial calculation
    while (n > 0) {
        sum *= n;  // Multiply sum by the current value of n
        n--;
    }

    printf("The factorial of %d is: %llu\n", og_num, sum);  // Use %llu for unsigned long long

    return 0;
}
