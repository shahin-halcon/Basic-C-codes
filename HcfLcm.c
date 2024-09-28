/*
Author: Shahin-Halcon
*/

#include<stdio.h>

// Function to calculate HCF (Highest Common Factor) and LCM (Least Common Multiple) of two numbers
void main()
{
    int a, b, x, y, t, hcf, lcm;
    
    // Prompt user to enter two numbers
    printf("Enter two numbers : ");
    scanf("%d%d", &x, &y);

    // Initialize a and b with the input values
    a = x;
    b = y;

    // Calculate HCF using Euclidean algorithm
    while (b != 0)
    {
        // Temporary variable to store the value of b
        t = b;
        
        // Update b to be the remainder of a divided by b
        b = a % b;
        
        // Update a to be the previous value of b
        a = t;
    }

    // The HCF is the final value of a
    hcf = a;

    // Calculate LCM using the formula: LCM = (x * y) / HCF
    lcm = (x * y) / hcf;

    // Print the results
    printf("\nHighest Common Factor of %d and %d : %d", x, y, hcf);
    printf("\nLeast Common Multiple of %d and %d : %d", x, y, lcm);
}