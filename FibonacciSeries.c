/*
Author: Shahin-Halcon
*/

#include<stdio.h>

int main()
{
    int x, c, i, y = 0, z = 1; // Declare variables x, c, i, y, and z

    printf("enter your digit"); // Prompt user to enter a digit
    scanf("%d", &x); // Input the digit

    if(x == 1) // Check if the input digit is 1
    {
        printf("series=\n0"); // Print the Fibonacci series for 1
    }
    else if(x == 2) // Check if the input digit is 2
    {
        printf("series=\n0\n1\n"); // Print the Fibonacci series for 2
    }
    else // If the input digit is greater than 2
    {
        printf("series=\n0\n1\n"); // Print the first two terms of the Fibonacci series
        for(i = 1; i <= x - 2; i++) // Loop to generate the remaining terms
        {
            c = y + z; // Calculate the next term
            printf("%d\n", c); // Print the next term
            y = z; // Update y to be the previous term
            z = c; // Update z to be the current term
        }
    }
    return 0;
}