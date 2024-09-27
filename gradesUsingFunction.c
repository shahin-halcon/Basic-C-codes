// This program calculates the sum, difference, product, and division of two numbers
// Author: shahin-halcon

// Include the standard input/output library
#include<stdio.h>

// Declare function prototypes for calculation functions
int sum();  // Function to calculate the sum of two numbers
int sub();  // Function to calculate the difference of two numbers
int prdt();  // Function to calculate the product of two numbers
int div();  // Function to calculate the division of two numbers

// Declare global variables to store the two numbers
int a, b;

// Define the main function
void main()
{
    // Declare a variable to store the result of calculations
    int result;

    // Display a message to the user
    printf("going to calculate the two numbers");

    // Prompt the user to enter two numbers
    printf("enter two numbers");

    // Read the two numbers from the user
    scanf("%d%d",&a,&b);

    // Calculate and display the sum of the two numbers
    printf("sum=%d",sum());

    // Calculate and display the difference of the two numbers
    printf("sub=%d",sub());

    // Calculate and display the product of the two numbers
    printf("product=%d",prdt());

    // Calculate and display the division of the two numbers
    printf("division=%d",div());
}

// Define the sum function
int sum()
{
    // Declare a variable to store the sum
    int c;

    // Calculate the sum of a and b
    c = a + b;

    // Return the sum
    return c;
}

// Define the sub function
int sub()
{
    // Declare a variable to store the difference
    int c;

    // Calculate the difference of a and b
    c = a - b;

    // Return the difference
    return c;
}

// Define the prdt function
int prdt()
{
    // Declare a variable to store the product
    int c;

    // Calculate the product of a and b
    c = a * b;

    // Return the product
    return c;
}

// Define the div function
int div()
{
    // Declare a variable to store the division result
    int c;

    // Calculate the division of a by b
    c = a / b;

    // Return the division result
    return c;
}