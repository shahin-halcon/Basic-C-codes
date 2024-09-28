/*
Author: Shahin-Halcon
*/

#include<stdio.h>

void main()
{
    double num, result;
    
    // Prompt user to enter a number
    printf("Enter number : ");
    scanf("%lf", &num);
    
    // Calculate the square root of the input number
    result = sqrt(num);
    
    // Print the result
    printf("Square root of %lf is %lf.", num, result);
    
    return 0;
}