// This program prints a pattern of numbers
// Author: shahin-halcon

// Include the standard input/output library
#include<stdio.h>

void main()
{
    int n, c, d, num = 1, space;
    
    // Prompt the user to enter the number of rows
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    
    // Initialize space variable
    space = n - 1;
    
    // Loop to print each row
    for (d = 1; d <= n; d++)
    {
        // Initialize num variable
        num = d;
        
        // Print spaces
        for (c = 1; c <= space; c++)
            printf(" ");
        
        // Decrement space
        space--;
        
        // Print numbers in ascending order
        for (c = 1; c <= d; c++)
        {
            printf("%d", num);
            num++;
        }
        
        // Decrement num twice
        num--;
        num--;
        
        // Print numbers in descending order
        for (c = 1; c < d; c++)
        {
            printf("%d", num);
            num--;
        }
        
        // Move to the next line
        printf("\n");
    }
}