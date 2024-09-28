/*
Author: Shahin-Halcon
*/

#include<stdio.h>

// Function to check average mark using an array
int main()
{
    int mark[5], i, sum = 0;
    float avg;

    // Prompt user to enter 5 marks
    for(i = 0; i < 5; i++)
    {
        printf("Enter the marks: ");
        scanf("%d", &mark[i]);
    }

    // Calculate the sum of the marks
    for(i = 0; i < 5; i++)
    {
        sum = sum + mark[i];
    }

    // Calculate the average mark
    avg = sum / 5.0; // Note: using 5.0 to ensure float division

    // Print the average mark
    printf("Average = %f", avg);

    return 0;
}