// This program calculates the square and cube of a number
// Author: shahin-halcon

// Include the standard input/output library
#include<stdio.h>

// Declare function prototypes for calculation functions
int cube(int);  // Function to calculate the cube of a number
int square(int);  // Function to calculate the square of a number

// Define the main function
int main()
{
    int n, s, c;

    // Prompt the user to enter a number
    printf("enter the number\n");

    // Read the number from the user
    scanf("%d",&n);

    // Calculate and display the square of the number
    s = square(n);
    printf("\nsquare of %d is %d", n, s);

    // Calculate and display the cube of the number
    c = cube(n);
    printf("\ncube of %d is %d", n, c);

    // Return 0 to indicate successful execution
    return 0;
}

// Define the square function
int square(int x)
{
    int z;

    // Calculate the square of x
    z = x * x;

    // Return the square
    return z;
}

// Define the cube function
int cube(int x)
{
    int z;

    // Calculate the cube of x
    z = x * x * x;

    // Return the cube
    return z;
}