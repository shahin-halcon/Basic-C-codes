// This program prints a pyramid pattern of stars
// Author: shahin-halcon

// Include the standard input/output library
#include<stdio.h>

void main()
{
    int i, j, k;

    // Loop to print each row of the pyramid
    for (i = 5; i >= 1; i--)
    {
        // Print spaces to create the pyramid shape
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }

        // Print stars to create the pyramid shape
        for (k = 1; k < (i * 2); k++)
        {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }
}