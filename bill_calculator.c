/*Create a C program that calculates the total cost of items purchased including taxes. The program
should prompt the user to enter the price and quantity of up to three items, calculate the subtotal,
apply a fixed tax rate, and display the total cost.

1. Define variables to store the price and quantity of up to three items (‘item1_price’,
‘item1_quantity’, ‘item2_price’, ‘item2_quantity’, ‘item3_price’, ‘item3_quantity’), all of
type ‘float’.
2. Prompt the user to enter the price and quantity for each item.
3. Calculate the subtotal for each item and then the total subtotal.
4. Apply a fixed tax rate of 8.5% (0.085) on the subtotal to calculate the total cost.
5. Display the subtotal, tax amount, and total cost with appropriate formatting.*/

#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main (void) {

    float item1_price, item1_quantity, item2_price, item2_quantity, item3_price, item3_quantity;
    float subtotal, total_subtotal, tax;

    // Prompt for first item
    printf("Please enter the price of your first item:  ");
    scanf("%f", &item1_price);
    printf("Please enter the quantity of this item:  ");
    scanf("%f", &item1_quantity);

    // Prompt for second item
    printf("Please enter the price of your second item:  ");
    scanf("%f", &item2_price);
    printf("Please enter the quantity of this item:  ");
    scanf("%f", &item2_quantity);

    // Prompt for third item
    printf("Please enter the price of your third item:  ");
    scanf("%f", &item3_price);
    printf("Please enter the quantity of this item:  ");
    scanf("%f", &item3_quantity);

    // Calculate subtotal and tax
    subtotal = (item1_price * item1_quantity) + (item2_price * item2_quantity) + (item3_price * item3_quantity); 
    tax = subtotal * 0.085;
    total_subtotal = subtotal + tax; // Total including tax

    // Display results
    printf("\nShopping Bill Calculator:\n");
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Tax: $%.2f\n", tax);
    printf("Total Cost: $%.2f\n", total_subtotal);

    return 0;
}
