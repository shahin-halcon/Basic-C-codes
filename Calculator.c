/*
Author: Shahin-Halcon
*/

#include<stdio.h>

// Function to calculate the sum of two numbers
int sum(int x, int y)
{
    return x + y; // Return the sum of x and y
}

// Function to calculate the difference of two numbers
int sub(int x, int y)
{
    return x - y; // Return the difference of x and y
}

// Function to calculate the product of two numbers
int prdct(int x, int y)
{
    return x * y; // Return the product of x and y
}

// Function to calculate the division of two numbers
int div(int x, int y)
{
    if(y != 0) // Check if y is not zero to avoid division by zero
    {
        return x / y; // Return the division of x and y
    }
    else
    {
        printf("Error: Division by zero is not allowed.\n"); // Print an error message
        return 0; // Return a default value
    }
}

int main()
{
    char op; // Declare a variable to store the operator
    int p, x, y; // Declare variables to store the numbers and result

    printf("Enter your 2 numbers: "); // Prompt user to enter two numbers
    scanf("%d%d", &x, &y); // Input the numbers

    printf("Enter your operator (+, -, *, /): "); // Prompt user to enter the operator
    scanf(" %c", &op); // Input the operator

    switch(op) // Use a switch statement to perform the operation based on the operator
    {
        case '+':
            p = sum(x, y); // Calculate the sum of x and y
            break;
        case '-':
            p = sub(x, y); // Calculate the difference of x and y
            break;
        case '*':
            p = prdct(x, y); // Calculate the product of x and y
            break;
        case '/':
            p = div(x, y); // Calculate the division of x and y
            break;
        default:
            printf("Invalid operator.\n"); // Print an error message if the operator is invalid
            break;
    }

    printf("Result = %d\n", p); // Print the result

    return 0;
}