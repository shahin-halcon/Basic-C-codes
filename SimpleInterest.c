/*
Author: Shahin-Halcon
*/

#include<stdio.h>

int main()
{
    // Declare variables to store principle, rate, time, and interest
    float p, r, t, intrst;

    // Calculate simple interest (but this line should be at the end, after input values are assigned)
    intrst = (p * r * t) / 100;

    // Prompt user to enter principle
    printf("Enter the principle: ");
    scanf("%f", &p);

    // Prompt user to enter rate of interest
    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    // Prompt user to enter time period
    printf("Enter the time period: ");
    scanf("%f", &t);

    // Print the simple interest (but this will print incorrect value because intrst is calculated before input values are assigned)
    printf("The simple interest is = %f", intrst);

    return 0;
}