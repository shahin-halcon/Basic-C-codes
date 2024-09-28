/*
Author: Shahin-Halcon
*/

#include<stdio.h>

// Function to calculate the standard deviation of a set of numbers
float calculate(float data[], int n)
{
    float sum = 0; // Initialize sum to 0
    float mean; // Declare variable to store the mean
    float SD = 0; // Initialize standard deviation to 0
    int i; // Declare variable for loop counter

    // Calculate the sum of the numbers
    for(i = 0; i < n; i++)
    {
        sum += data[i]; // Add each number to the sum
    }

    // Calculate the mean
    mean = sum / n; // Divide the sum by the number of elements

    // Calculate the standard deviation
    for(i = 0; i < n; i++)
    {
        SD += (data[i] - mean) * (data[i] - mean); // Calculate the squared difference from the mean
    }

    // Return the square root of the average of the squared differences
    return sqrt(SD / n);
}

int main()
{
    int i, n; // Declare variables for loop counter and number of elements
    float data[6]; // Declare array to store the numbers

    printf("Enter the number of elements: "); // Prompt user to enter the number of elements
    scanf("%d", &n); // Input the number of elements

    printf("Enter the elements: "); // Prompt user to enter the elements
    for(i = 0; i < n; i++)
    {
        scanf("%f", &data[i]); // Input each element
    }

    // Print the standard deviation
    printf("Standard Deviation = %f\n", calculate(data, n));

    return 0;
}