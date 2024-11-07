#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void){

int int_1, int_2;
float sum, difference, product, quotient;

do
{
    printf("Enter your first integer: ");
    scanf("%d", &int_1);

    printf("\nEnter your second integer: ");
    scanf("%d", &int_2);

    if (int_1 == 0 || int_2 == 0){
        printf("Can not divide by 0.\n");
    }
} while (int_1 == 0 || int_2 == 0);

sum = int_1  + int_2;
difference = int_1 - int_2;
product = int_1 * int_2;
quotient = int_1 / int_2;

printf("Sum: %f", sum);
printf("\nDifference: %f", difference);
printf("\nProduct: %f", product);
printf("\nquotient: %f", quotient);

    return 0;
}
