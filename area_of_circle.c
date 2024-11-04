// Area of a Circle
// area.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>               // for printf, scanf

int main(void)
{
    const float pi = 3.14159f;   // pi is a constant float
    float radius;                // radius is a float
    float area;                  // area is a float


    printf("Enter radius: ");   // prompt user for radius input
    scanf("%f", &radius);        // accept radius value from user
    area = pi * radius * radius; // calculate area from radius

    printf("Area = %f\n", area); // copy area to standard output

    return 0;
}

