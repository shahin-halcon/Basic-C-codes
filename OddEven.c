// This program checks for odd and even numbers in a given range
// Author: shahin-halcon

// Include the standard input/output library
#include<stdio.h>

// Define the main function
void main()
{
    // Declare two integer variables
    int num1, num2;
    
    // Prompt the user to enter a range
    printf("enter your range\n");
    
    // Read two integers from the user
    scanf("%d %d", &num1, &num2);
    
    // Print the range entered by the user
    printf("your range is from %d to %d", num1, num2);
    
    // Loop through the range
    while(num1 <= num2)
    {
        // Check if the current number is even
        if(num1 % 2 == 0)
        {
            // Print the even number
            printf("even = %d \n", num1);
        }
        else
        {
            // Print the odd number
            printf("\t odd = %d \n", num1);
        }
        
        // Increment the current number
        num1++;
    }
    
    // Return 0 to indicate successful execution
    return 0;
}