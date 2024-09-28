/*
Author: Shahin-Halcon
*/

#include<stdio.h>

int main()
{
    float f, c;

    // Calculate Celsius from Fahrenheit (but this line should be at the end, after input value is assigned)
    c = (f - 32) * 5 / 9;

    // Prompt user to enter temperature in Fahrenheit
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);

    // Print the temperature in Celsius (but this will print incorrect value because c is calculated before input value is assigned)
    printf("The temperature in Celsius is %f", c);

    return 0;
}