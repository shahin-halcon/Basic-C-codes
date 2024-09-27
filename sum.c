// This program calculates the sum of two numbers
// Author: shahin-halcon

// Include the standard input/output library
#include<stdio.h>

// Function to calculate the sum
void sum(int a, int b)
{
    // Print the sum
    printf("\n the sum is %d", a+b);
}

void main()
{
    int a, b, result;
    // Print a message
    printf("\n going to check the sum");
    // Read two integers from the user
    scanf("%d%d",&a,&b);
    // Call the sum function to calculate the sum
    sum(a,b);
}