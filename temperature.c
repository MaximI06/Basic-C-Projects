//Declare variables to store the temperature in Celsius (‘tempC’) and Fahrenheit (‘tempF’)
//Prompt the user to enter a temperature in Celsius
//Read the input value from the user
//Calculate the equivalent temperature in Fahrenheit using the provided formula
//Display the converted temperature in Fahrenheit to the user


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>                                          // for printf, scanf

int main(void)
{
    float tempC;                                            // temperature celcius is a float
    float tempF;                                            // temperature farenheit is a float


    printf("Enter temperature in celcius: ");               // prompt user for temperature input in celcius
    scanf("%f", & tempC);                                   // accept temp value from user
    tempF = tempC * 1.8 + 32;                               // calculate farenheit from celcius

    printf("Temperature in farenheit is: %f\n", tempF);     // copy temp to standard output


    float tempC_1;                                          // temperature celcius is a float
    float tempF_1;                                          // temperature farenheit is a float


    printf("Enter temperature in farenheit: ");            // prompt user for temperature input in farenheit
    scanf("%f", & tempF_1);                                 // accept temp value from user
    tempC_1 = (tempF_1 - 32) / 1.8;                         // calculate celcius from farenheit

    printf("Temperature in celcius is: %f\n", tempC_1);   // copy temp to standard output



    return 0;
}